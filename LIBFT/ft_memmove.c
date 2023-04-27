/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:13:22 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/27 20:26:40 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	cont;

	if ((dest == ((void *)0)) || (src == ((void *)0)))
		return (NULL);
	cont = 0;
	while ((cont < n) && (src != ((void *)0)))
	{
		((char *)dest)[cont] = ((const char *)src)[cont];
		cont++;
	}
	return (dest);
}

/* int	main(void)
{
	char	*dest1;
	size_t	n;
	char	src[] = "lorem ipsum dolor sit amet";

	dest1 = src + 1;
	n = 8;
	memmove(dest1, src, n);
	printf("LIBFT: %s\n", dest1);
	return (0);
}
 */