/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:11:36 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/10 17:18:30 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	pos_dst;
	size_t	pos_src;
	size_t	cont_ret;

	pos_dst = 0;
	pos_src = 0;
	cont_ret = 0;
	if (size != 0)
	{
		while (src[pos_src] != '\0' && pos_src < (size - 1))
		{
			dst[pos_dst] = src[pos_src];
			pos_dst++;
			pos_src++;
		}
		dst[pos_dst] = '\0';
	}
	cont_ret = ft_strlen(src);
	return (cont_ret);
}
