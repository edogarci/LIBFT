/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:53:12 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/06 15:24:59 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/* size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	pos_dst;
	size_t	pos_src;
	size_t	len_dst;
	size_t	len_src;

	pos_src = 0;
	len_dst = strlen(dst);
	len_src = strlen(src);
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
	cont_ret = strlen(src);
	return (cont_ret);
} */

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *ptr_ret;
	int		len_s1;
	int		len_s2;

	len_s1 = (int)ft_strlen(s1);
	len_s2 = (int)ft_strlen(s2);
	
	if (!s1 && !s2)
		return (NULL);
	ptr_ret = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!ptr_ret)
		return (NULL);
	ft_strlcpy(ptr_ret, s1, len_s1 + 1);
	ft_strlcat(ptr_ret, s2, len_s1 + len_s2 + 1);
	return (ptr_ret);
}

/* int main(void)
{
	char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";
	char	*strjoin;

	strjoin = ft_strjoin(s1, s2);
	printf("%s\n", strjoin);
	return (0);
} */