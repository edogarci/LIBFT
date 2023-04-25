/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:43:05 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/25 15:50:17 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int find_first_valid_pos(const char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] == ' ' || str[pos] == '\t' || str[pos] == '\v' || 
		str[pos] == '\n' || str[pos] == '\r' || str[pos] == '\f')
	{
		pos++;
	}
	return (pos);
}

int	ft_atoi(const char *str)
{
	int		pos;
	int		num;
	char	neg_flag;

	pos = find_first_valid_pos(str);
	if (str[pos] == '-')
	{
		neg_flag = 'X';
		pos++;
	}
	else if (str[pos] == '+')
	{
		neg_flag = ' ';
		pos++;
	}
	while (str[pos] != '\0' && (str[pos] >= '0' && str[pos] <= '9'))
	{
		num = num * 10 + (str[pos] - '0');
		pos++;
	}
	if (neg_flag == 'X')
		return (num * -1);
	else
		return (num);
}

/* int	main(void)
{
	char str[] = "ad28";

	printf("LIBFT   : %i\n", ft_atoi(str));
	printf("Standard: %i\n", atoi(str));
} */