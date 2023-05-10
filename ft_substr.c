/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:07:11 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/09 16:52:04 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr_ret;
	size_t	end;
	size_t	real_len;
	int		pos;
	size_t	malloc_size;

	if (!s)
		return (NULL);
	real_len = strlen(s);
	if (start > real_len)
/* 		ptr_ret = malloc(1 * sizeof(char)); */
		malloc_size = 1;
	else
	{
/* 		if (len > real_len)
			ptr_ret = malloc((real_len + 1) * sizeof(char));
		else
			ptr_ret = malloc((len + 1) * sizeof(char)); */
		if (len >= (real_len - start))
			malloc_size = real_len - start + 1;
		else
			malloc_size = len + 1;
	}
	ptr_ret = malloc(malloc_size * sizeof(char));
	if (!ptr_ret)
		return (NULL);
	else
	{
/* 		if (len > real_len)
			ft_bzero(ptr_ret, (real_len + 1) * sizeof(char));
		else
			ft_bzero(ptr_ret, (len + 1) * sizeof(char)); */
		bzero(ptr_ret, malloc_size * sizeof(char));
/* 		pos = 0; */
/* 		end = (size_t)start + len ;*/
		end = (size_t)start + malloc_size - 1;
		if ((size_t)start >= real_len)
			return (ptr_ret);
		else
		{
			pos = 0;
			while (((size_t)start < end) && (s[start] != '\0'))
			{
				ptr_ret[pos] = s[start];
				pos++;
				start++;
			}
			ptr_ret[pos] = '\0';
			return (ptr_ret);
		}
	}	
}

/* int main(void)
{
	char	*s;
	
	s = ft_substr("hola", 2, 3);
	return (0);
} */