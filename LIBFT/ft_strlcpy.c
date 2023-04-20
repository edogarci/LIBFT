/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:11:36 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/18 13:48:13 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t size)
{
	int	pos_dst;
	int	pos_src;
	int	cont_ret;

	pos_dst = 0;
	pos_src = 0;
	cont_ret = 0;
	while (src[pos_src] != '\0' && pos_src < size)
	{
		dst[pos_dst] = src[pos_src];
		pos_dst++;
		pos_src++;
	}
	if (size != 0)
		dst[pos_dst] = '\0';
	cont_ret = ft_strlen(src);
	return (cont_ret);
}
