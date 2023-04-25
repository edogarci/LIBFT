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

int	ft_atoi(const char *str)
{
	int	pos;
	int	num;

	pos = 0;
	while (str[pos] != '\0' && (str[pos] >= '0' && str[pos] <= '9'))
	{
		num = num * 10 + (str[pos] - '0');
		pos++;
	}
	return (num);
}

int	main(void)
{
	char str[] = "-4886";

	printf("LIBFT   : %i\n", ft_atoi(str));
	printf("Standard: %i\n", atoi(str));
}
