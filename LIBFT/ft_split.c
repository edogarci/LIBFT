/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:16:02 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/10 17:17:01 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_amount_of_substr(char const *s, char c)
{
	int	amount;
	int	pos;
	int	len;

	amount = 0;
	if (s)
	{
		len = ft_strlen(s);
		pos = 1;
		while (pos <= len)
		{
			if ((s[pos] == c || s[pos] == '\0')
				&& (s[pos - 1] != c))
				amount++;
			pos++;
		}
	}
	return (amount);
}

static int	get_substr_len(char *str, char delimiter, int *real_len)
{
	int	pos;
	int	cont;
	int	len;

	cont = 0;
	pos = 0;
	len = ft_strlen(str);
	while (pos <= len)
	{
		if (pos == 0)
		{
			if (str[pos] != delimiter && str[pos] != '\0')
				cont++;
		}
		else
		{
			if ((str[pos] == delimiter || str[pos] == '\0')
				&& (str[pos - 1] != delimiter))
				break ;
			else
			{
				if (str[pos] != delimiter && str[pos] != '\0')
					cont++;
			}
		}
		pos++;
	}
	*real_len = pos;
	return (cont);
}

static void	assign_substr(char *dst, char *src, int len, char c)
{
	int	pos;
	int	cont;

	cont = 0;
	pos = 0;
	while (cont < len)
	{
		if (src[pos] != c)
		{
			dst[cont] = src[pos];
			cont++;
		}
		pos++;
	}
	dst[cont] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**ptr_ret;
	int		substrs_amount;
	int		cont;
	int		substr_len;
	char	*ptr_substr;
	int		real_len;

	substrs_amount = get_amount_of_substr(s, c);
	if (!s)
		return (NULL);
	ptr_ret = malloc(((substrs_amount + 1) * sizeof(char *)));
	if (!ptr_ret)
		return (NULL);
	cont = 0;
	ptr_substr = (char *)s;
	while (cont < (int)substrs_amount)
	{
		substr_len = get_substr_len(ptr_substr, c, &real_len);
		ptr_ret[cont] = (char *)malloc((substr_len + 1) * sizeof(char));
		if (!ptr_ret[cont])
		{
			while (--cont >= 0)
				free(ptr_ret[cont]);
			free(ptr_ret);
			return (NULL);
		}
		assign_substr(ptr_ret[cont], ptr_substr, substr_len, c);
		ptr_substr = ptr_substr + real_len;
		cont++;
	}
	ptr_ret[cont] = NULL;
	return (ptr_ret);
}
