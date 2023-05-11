/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:54:34 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/10 17:17:36 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;
	size_t	len_s;
	size_t	pos;

	cc = (char)c;
	len_s = ft_strlen(s) + 1;
	pos = 0;
	while (pos < len_s)
	{
		if (s[pos] == cc)
			return ((char *)(&s[pos]));
		pos++;
	}
	return (NULL);
}
