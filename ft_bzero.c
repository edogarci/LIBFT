/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:54:02 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/05 12:00:09 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h> */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		((char *)s)[cont] = '\0';
		cont++;
	}
}

/* int	main(int argc, char *argv[])
{
	void	*s;
	size_t	n;
	char	str1[] = "str de testeo un poco mas larga";

	(void)argc;
	(void)argv;
	n = 1;

	s = (void *)str1;
	ft_bzero(s, n);
	printf("LIBFT   : %s\n", s);

	s = (void *)str1;
	bzero(s, n);
	printf("Standard: %s\n", s);
	return (0);
}
 */