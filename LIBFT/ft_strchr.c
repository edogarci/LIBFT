/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:54:34 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/08 17:16:40 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */
#include "libft.h"

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
