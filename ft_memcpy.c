/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:25:56 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/10 17:11:52 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	cont;

	cont = 0;
	while ((cont < n) && ((dest != (void *)0) || (src != (void *)0)))
	{
		((char *)dest)[cont] = ((char *)src)[cont];
		cont++;
	}
	return (dest);
}
