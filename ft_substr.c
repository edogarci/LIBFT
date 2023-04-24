/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:20:11 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/18 19:58:23 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr_ret;
	unsigned int	pos_s;
	unsigned int	pos_ret;

	pos_s = start;
	pos_ret = 0;
	ptr_ret = malloc(len * sizeof(char));
	if (ptr_ret != NULL)
	{
		while ((s[pos_s] != '\0') && (pos_ret <= len - 1))
		{
			ptr_ret[pos_ret] = s[pos_s];
			pos_s++;
			pos_ret++;
		}
		ptr_ret[pos_ret] = '\0';
	}
	return (ptr_ret);
}
