/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:54:34 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/20 20:25:30 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <ctype.h>
#include <string.h> */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	while (s[cont] != '\0')
		cont++;
	return (cont);
}

/* int	main(int argc, char *argv[])
{
	(void)argc;

	printf("LIBFT   : %lu\n", ft_strlen(argv[1]));
	printf("Standard: %lu\n", strlen(argv[1]));
	return (0);
}
 */