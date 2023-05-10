/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:38:27 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/20 20:25:38 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <ctype.h> */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/* int	main(int argc, char *argv[])
{
	int	c;

	c = (int)*argv[1];
	(void)argc;

	printf("LIBFT   : %i\n", ft_isascii(c));
	printf("Standard: %i\n", isascii(c));
	return (0);
}
 */