/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:54:34 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/27 19:37:02 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */
#include "libft.h"

/* char	*ft_strchr(const char *s, int c)
{
	int		pos;
	int		str_len;

	pos = 0;
	str_len = ft_strlen(s) + 1;
	while (pos <= str_len)
	{
		if (s[pos] == c)
			return ((char *)(&s[pos]));
		else if (s[pos] == '\0')
			return (NULL);
		else
			pos++;
	}
	return (NULL);
} */

char	*ft_strchr(const char *s, int c)
{
	char	cc;
	size_t	len_s;
	size_t	pos;

	cc = (char)c;
	len_s = ft_strlen(s) + 1;
	pos = 0;
	while (pos < len_s)
	{
		if (s[pos] == cc)
			return ((char *)(&s[pos]));
		pos++;
	}
	return (NULL);
}

/* int	main(void)
{
	printf("LIBFT   : %s\n", ft_strchr("AA\0B", 'B'));
	printf("Standard: %s\n", strchr("AA\0B", 'B'));
	return (0);
} */
