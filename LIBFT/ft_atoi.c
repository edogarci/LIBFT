/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:43:05 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/20 18:00:00 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stddef.h>

int	ft_atoi(const char *str)
{
	int		pos;
	char	c;
	int		res;
	int		num;

	num = 0;
	pos = 0;
	while (str[pos] != '\0')
	{
		c = str[pos];
		if (pos == 0)
		{
			if ((ft_isdigit(c) == 1) || (c == '-'))
				continue ;
			else
				return (0);
		}
		else
		{
			num = num;
		}
		pos++;
	}
}
