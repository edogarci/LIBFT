/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:43:05 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/24 12:36:58 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	a;

	(void)str;
	a = 0;
	return (a);
}
/* int	ft_atoi(const char *str)
{
	int		pos;
	int		res;
	int		num;

	num = 0;
	pos = 0;
	while ((str[pos] != '\0') && (ft_isdigit(str[pos]) == 1 || str[pos] == '.' || str[pos] == ','))
	{

		pos++;
	}
}
 */