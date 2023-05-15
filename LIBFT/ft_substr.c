/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:07:11 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/15 13:20:13 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	get_malloc(size_t *len, size_t *real, unsigned int *start, size_t *size)
{
	if (*start > *real)
		*size = 1;
	else
	{
		if (*len >= (*real - *start))
			*size = *real - *start + 1;
		else
			*size = *len + 1;
	}
}

void	inc_assgn(int *pos, unsigned int *start, char *ptr_ret, char const *s)
{
	ptr_ret[*pos] = s[*start];
	(*pos)++;
	(*start)++;
}

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
	get_malloc(&len, &real_len, &start, &malloc_size);
	ptr_ret = malloc(malloc_size * sizeof(char));
	if (!ptr_ret)
		return (NULL);
	ft_bzero(ptr_ret, malloc_size * sizeof(char));
	end = (size_t)start + malloc_size - 1;
	if ((size_t)start >= real_len)
		return (ptr_ret);
	else
	{
		pos = 0;
		while (((size_t)start < end) && (s[start] != '\0'))
			inc_assgn(&pos, &start, ptr_ret, s);
		ptr_ret[pos] = '\0';
		return (ptr_ret);
	}
}
