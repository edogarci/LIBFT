/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:11:36 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/24 12:26:29 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		pos_dst;
	int		pos_src;
	size_t	cont;
	size_t	orig_len_dst;
	int		orig_len_src;

	pos_dst = 0;
	pos_src = 0;
	cont = 0;
	orig_len_dst = ft_strlen(dst);
	orig_len_src = ft_strlen(src);
	pos_dst = orig_len_dst;
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

/* int	main(int argc, char *argv[])
{
	size_t	n;
	char	str1[20] = "str dest";
	char	str2[20] = "str source";
	//char	str3[] = "str dest";
	//char	str4[] = "str source";

	(void)argc;
	(void)argv;
	n = 5;

	printf("LIBFT   : %u - %s\n", ft_strlcat(str1, str2, n), str1);
	//printf("Standard: %u - %s\n", strlcat(str3, str4, n), str3);
	return (0);
} */