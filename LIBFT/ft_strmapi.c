/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:02:54 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/10 17:18:50 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	pos;
	size_t			len;
	char			*ptr;

	len = ft_strlen(s);
	ptr = malloc ((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	pos = 0;
	while (s[pos] != '\0')
	{
		ptr[pos] = (*f)(pos, s[pos]);
		pos++;
	}
	ptr[pos] = '\0';
	return (ptr);
}
