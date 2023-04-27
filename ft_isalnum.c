/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:16:58 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/20 20:25:41 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <ctype.h> */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) == 1) || (ft_isdigit(c) == 1))
		return (1);
	else
		return (0);
}

/* int	main(int argc, char *argv[])
{
	int	c;

	c = (int)*argv[1];
	(void)argc;

	printf("LIBFT   : %i\n", ft_isalnum(c));
	printf("Standard: %i\n", isalnum(c));
	return (0);
}
 */