/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:11:36 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/18 14:08:32 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	int	pos_dst;
	int	pos_src;
	int	cont;
	int	orig_len_dst;
	int	orig_len_src;

	pos_dst = 0;
	pos_src = 0;
	cont = 0;
	orig_len_dst = ft_strlen(dst);
	orig_len_src = ft_strlen(src);
	pos_dst = orig_len_dst + 1;
	while (src[pos_src] != '\0' && cont <= (size - orig_len_dst - 1))
	{
		dst[pos_dst] = src[pos_src];
		pos_dst++;
		pos_src++;
		cont++;
	}
	if (size != 0 && orig_len_dst <= size)
		dst[pos_dst] = '\0';
	return (orig_len_dst + orig_len_src);
}
