/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:07:11 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/10 17:23:17 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr_ret;
	size_t	end;
	size_t	real_len;
	int		pos;
	size_t	malloc_size;

	if (!s)
		return (NULL);
	real_len = ft_strlen(s);
	if (start > real_len)
		malloc_size = 1;
	else
	{
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
		ft_bzero(ptr_ret, malloc_size * sizeof(char));
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
