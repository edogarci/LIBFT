/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:13:22 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/24 12:24:32 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	cont;
	char	*temp;

	temp = NULL;
	cont = 0;
	while (cont < n)
	{
		temp[cont] = ((char *)src)[cont];
		cont++;
	}
	cont = 0;
	while (cont < n)
	{
		((char *)dest)[cont] = temp[cont];
		cont++;
	}
	return (dest);
}

int	main(void)
{
	void	*dest1[30];
	void	*dest2[30];
	void	*src1 = "123456";
	void	*src2 = "123456";
	size_t	n = 4;

	ft_memmove(dest1, src1, n);
	printf("LIBFT   : %s\n", (char *)dest1);

	memmove(dest2, src2, n);
	printf("Standard: %s\n", (char *)dest2);

	return (0);
}
