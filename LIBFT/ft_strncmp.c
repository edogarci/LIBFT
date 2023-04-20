/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:43:05 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/18 14:54:46 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	pos;

	pos = 0;
	while (s1[pos] != '\n' && s2[pos] != '\n' && n > 0)
	{
		if (s1[pos] > s2[pos])
			return (1);
		else if (s1[pos] < s2[pos])
			return (-1);
		n--;
		pos++;
	}
	return (0);
}
