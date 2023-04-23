/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:13:22 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/20 17:54:17 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	cont;

	cont = 0;
	while (cont < n)
	{
		((char *)dest)[cont] = ((char *)src)[cont];
		cont++;
	}
	//((char *)dest)[cont] = '\0';
	return (dest);
}

int	main(int argc, char *argv[])
{
	void	*dest[17];
	void	*src1 = "string de prueba";
	void	*src2 = "string de prueba";
	size_t	n = 0;

	(void)argc;
	(void)argv;

	ft_memmove(dest, src1, n);
	printf("LIBFT   : %s\n", (char *)dest);
	memmove(dest, src2, n);
	printf("Standard: %s\n", (char *)dest);
	return (0);
}
