/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:54:34 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/20 20:25:34 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <ctype.h> */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int	c;

	c = 0;

	while (c <= 127)
	{
		printf("Valor: %i (%c) - ", c, (char)c);
		printf("LIBFT   : %i - ", ft_isprint(c));
		printf("Standard: %i\n", isprint(c));
		c++;
	}
	return (0);
} */