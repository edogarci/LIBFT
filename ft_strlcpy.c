/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:11:36 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/24 12:27:15 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <bsd/string.h> */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	pos_dst;
	size_t	pos_src;
	size_t	cont_ret;

	pos_dst = 0;
	pos_src = 0;
	cont_ret = 0;
	while (src[pos_src] != '\0' && pos_src < (size - 1))
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

/* int	main(int argc, char *argv[])
{
	char	str1[1];
	char	str2[1];

	(void)argc;
	(void)argv;

	printf("LIBFT   : %lu - %s\n", ft_strlcpy(str1, "lorem ipsum dolor sit amet", 0), str1);
	printf("Standard: %lu - %s\n",    strlcpy(str2, "lorem ipsum dolor sit amet", 0), str2);
	return (0);
} */