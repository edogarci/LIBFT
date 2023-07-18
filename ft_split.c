/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:16:02 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/15 16:09:38 by edogarci         ###   ########.fr       */
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

static int	sstrlen(char *str, char delimiter, int *real_len)
{
	int	pos;
	int	cont;

	cont = 0;
	pos = 0;
	while (pos <= (int)ft_strlen(str))
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
				if (str[pos] != delimiter && str[pos] != '\0')
					cont++;
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

static int	free_all(int cont, char **ret)
{
	if (!ret[cont])
	{
		while (--(cont) >= 0)
			free(ret[cont]);
		free(ret);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		substrs_amount;
	int		cont;
	int		rlen;

	substrs_amount = get_amount_of_substr(s, c);
	if (!s)
		return (NULL);
	ret = malloc(((substrs_amount + 1) * sizeof(char *)));
	if (!ret)
		return (NULL);
	cont = 0;
	while (cont < substrs_amount)
	{
		ret[cont] = malloc((sstrlen((char *)s, c, &rlen) + 1) * sizeof(char));
		if (free_all(cont, ret))
			return (NULL);
		assign_substr(ret[cont], (char *)s, sstrlen((char *)s, c, &rlen), c);
		s = s + rlen;
		cont++;
	}
	ret[cont] = NULL;
	return (ret);
}
