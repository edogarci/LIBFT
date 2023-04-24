/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:54:34 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/18 14:41:05 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	pos;

	pos = 0;
	while (pos <= n)
	{
		if (((char *)s)[pos] == c)
			return ((void *)(&((char *)s)[pos]));
		pos++;
	}
	return (NULL);
}

/* int	main(int argc, char *argv[])
{
	(void)argc;
//    printf("LIBFT   : %s\n", (char *)(ft_memchr(argv[1], (int)*argv[2], (size_t)*argv[3])));
//    printf("Standard: %s\n", (char *)(memchr(argv[1], (int)*argv[2], (size_t)*argv[3])));
    printf("LIBFT   : %s\n", (char *)(ft_memchr(argv[1], (int)*argv[2], 5)));
    printf("Standard: %s\n", (char *)(memchr(argv[1], (int)*argv[2], 5)));

	return (0);
}
 */