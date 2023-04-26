/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:13:22 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/26 11:02:14 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h>
#include <stdlib.h> */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n && (dest != NULL && src != NULL))
	{
		((char *)dest)[cont] = ((const char *)src)[cont];
		cont++;
	}
	return (dest);
}

/* int	main(void)
{
	void	*dest1 = "oldstring";
	void	*dest2 = "oldstring";
	void	*src1 = "123456";
	void	*src2 = "123456";
	void	*dest1 = NULL;
	void	*dest2 = NULL;
	void	*src1 = NULL;
	void	*src2 = NULL;
	size_t	n = 4;

	ft_memmove(dest1, src1, n);
	printf("LIBFT   : %s\n", (char *)dest1);
	memmove(dest2, src2, n);
	printf("Standard: %s\n", (char *)dest2);
	return (0);
}
 */