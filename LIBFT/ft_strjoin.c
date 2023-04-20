/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:54:44 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/18 20:04:17 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stddef.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr_ret;
	int		pos;
	int		pos_ret;

	ptr_ret = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (ptr_ret != NULL)
	{
		pos = 0;
		pos_ret = 0;
		while (s1[pos] != '\0')
		{
			ptr_ret[pos_ret] = s1[pos];
			pos_ret++;
			pos++;
		}
		pos = 0;
		while (s2[pos] != '\0')
		{
			ptr_ret[pos_ret] = s2[pos];
			pos_ret++;
			pos++;
		}
	}
	return (ptr_ret);
}
