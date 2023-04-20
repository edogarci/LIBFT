/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:00:45 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/20 20:25:53 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <ctype.h> */
#include "libft.h"

int	ft_isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	else
		return (0);
}

/* int	main(int argc, char *argv[])
{
	int	c;

	c = (int)*argv[1];
	(void)argc;

	printf("LIBFT   : %i\n", ft_isalpha(c));
	printf("Standard: %i\n", isalpha(c));
	return (0);
}
 */