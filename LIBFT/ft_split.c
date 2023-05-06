/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:16:02 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/05 18:30:01 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_amount_of_substr(char const *s, char c)
{
	int	amount;
	int	pos;
	int len;

	amount = 0;
	if (s)
	{
/* 		pos = 1;
		len = ft_strlen(s);
		amount = 0;
		while (pos <= len)
		{
			if (((s[pos] != c) && (s[pos - 1] == c))
				|| (s[pos] == '\0' && s[pos -1] != c))
				amount++;
			pos++;
		} */
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

static int get_substr_len(char *str, char delimiter, int *real_len)
{
	int	pos;
	int cont;
	int	len;

	cont = 0;
	pos = 0;
	len = ft_strlen(str); //"   ipsum "
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
			{
				//cont++;
				//pos++;
				break ;
			}
			else
			{
				if (str[pos] != delimiter && str[pos] != '\0')
				{
					cont++;
				}
			}
		}
		pos++;
	}
/* 	while (!((str[pos] == delimiter) && (str[pos - 1] != delimiter)))
	{
		if (str[pos] != delimiter)
			cont++;
		pos++;
		if (str[pos] == '\0')
			break ;
	} */
	*real_len = pos;
	return (cont);
}

static void assign_substr(char *dst, char *src, int len, char c)
{
	int pos;
	int cont;

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

char **ft_split(char const *s, char c)
{
    char    **ptr_ret;
	int		substrs_amount;
	int		cont;
	int		substr_len;
	char	*ptr_substr;
	int		*ptr_real_len;
	int		real_len;

	ptr_real_len = &real_len;
	substrs_amount = get_amount_of_substr(s, c);
	if (!s)
		return (NULL);
	ptr_ret = malloc(substrs_amount * sizeof(char *));
	if (ptr_ret)
	{
		cont = 0;
		ptr_substr = (char *)s;
		while (cont < (int)substrs_amount)
		{
			substr_len = get_substr_len(ptr_substr, c, ptr_real_len);
			ptr_ret[cont] = (char *)malloc((substr_len + 1) * sizeof(char));
			assign_substr(ptr_ret[cont], ptr_substr, substr_len, c);
			ptr_substr = ptr_substr + real_len;
			cont++;
		}
	}
	return (ptr_ret);
}

/* int main(void)
{
    char    **ptr;
	char	s[] = "split  ||this|for|me|||||!|";
	char	del = '|';

	ptr = ft_split(s, del);
	return (0);
} */