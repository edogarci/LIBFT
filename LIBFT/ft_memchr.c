/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:54:34 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/25 15:14:58 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	pos;

	pos = 0;
	while (pos < n)
	{
		if (((char *)s)[pos] == c)
			return ((void *)(&((char *)s)[pos]));
		pos++;
	}
	return (NULL);
}

/* int	main(void)
{
	printf("LIBFT   : %s\n", (char *)(ft_memchr("bonjourno", 'n', 2)));
	printf("Standard: %s\n", (char *)(memchr("bonjourno", 'n', 2)));
	return (0);
}
 */