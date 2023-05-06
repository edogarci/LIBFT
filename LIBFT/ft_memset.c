/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:12:56 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/20 20:52:37 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h> */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		((char *)s)[cont] = c;
		cont++;
	}
	return (s);
}

/* int	main(int argc, char *argv[])
{
	void	*s;
	int		c;
	size_t	n;
	char	str1[] = "str de testeo un poco mas larga";
	char	str2[] = "_";

	(void)argc;
	(void)argv;
	s = (void *)str1 + 3;
	c = (int)*str2;
	n = 5;

	printf("LIBFT   : %s\n", ft_memset(s, c, n));
	printf("Standard: %s\n", memset(s, c, n));
	return (0);
}
 */