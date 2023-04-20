/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:25:56 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/20 21:14:19 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h> */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	cont;
	void	*ptr;

	cont = 0;
	while (cont < n)
	{
		((char *)dest)[cont] = ((char *)src)[cont];
		cont++;
	}
	ptr = dest;
	return (ptr);
}

/* int	main(int argc, char *argv[])
{
	void	*dest[17];
	void	*src1 = "string de prueba";
	void	*src2 = "string de prueba";
	size_t	n = 0;

	(void)argc;
	(void)argv;

	ft_memcpy(dest, src1, n);
	printf("LIBFT   : %s\n", (char *)dest);
	memcpy(dest, src2, n);
	printf("Standard: %s\n", (char *)dest);
	return (0);
}
 */