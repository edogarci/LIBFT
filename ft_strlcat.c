/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:11:36 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/27 16:44:01 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	pos_dst;
	size_t	pos_src;
	size_t	len_dst;
	size_t	len_src;

	pos_src = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	pos_dst = len_dst;
	if ((len_dst < (size - 1)) && (size > 0))
	{
		while ((src[pos_src] != '\0') && ((len_dst + pos_src) < (size - 1)))
		{
			dst[pos_dst] = src[pos_src];
			pos_dst++;
			pos_src++;
		}
		dst[pos_dst] = '\0';
	}
	if (len_dst >= size)
		len_dst = size;
	return (len_dst + len_src);
}

/* int	main(void)
{
	char	dst[] = "pqrstuvwxyz";
	char	src[] = "abcd";
	size_t	n = 20;

	printf("LIBFT: %lu - %s\n", ft_strlcat(dst, src, n), dst);
	return (0);
}
 */