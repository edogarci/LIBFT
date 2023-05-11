/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:13:22 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/10 17:12:10 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
