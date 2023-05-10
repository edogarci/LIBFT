/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:13:22 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/08 16:54:10 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h>
#include <stdlib.h> */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	cont;

	if (!dest && !src)
		return (NULL);
	if ((src < dest) && ((src + (int)n) > dest))
	{
		cont = (int)n - 1;	
		while (cont >= 0)
		{
			((char *)dest)[cont] = ((const char *)src)[cont];
			cont--;
		}
	}
	else
	{
		cont = 0;	
		while (cont < (int)n)
		{
			((char *)dest)[cont] = ((const char *)src)[cont];
			cont++;
		}
	}
	return (dest);
}

/* int	main(void)
{
	size_t	n;
	char	*dest;
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest2;
	char	src2[] = "lorem ipsum dolor sit amet";

	n = 5;
	dest = src + 6;
	ft_memmove(((void *)0), ((void *)0), n);
	printf("libft: %s\n", dest);
	return (0);
} */
