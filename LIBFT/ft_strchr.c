/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:54:34 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/18 14:41:05 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	pos;
	int	str_len;

	pos = 0;
	str_len = ft_strlen(s);
	if (str_len >= 0)
		str_len + 1;
	while (pos <= str_len)
	{
		if (s[pos] == c)
			return (s[pos]);
		pos++;
	}
	return (NULL);
}
