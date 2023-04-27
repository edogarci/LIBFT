/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:25:56 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/27 17:08:12 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h> */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	cont;

	cont = 0;
	while ((cont < n) && ((dest != (void *)0) || (src != (void *)0)))
	{
		((char *)dest)[cont] = ((char *)src)[cont];
		cont++;
	}
	return (dest);
}

/* int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	printf("LIBFT   : %s\n", (char *)ft_memcpy(((void *)0), "segfaulter tu dois", 17));
	printf("Standard: %s\n", (char *)memcpy(((void *)0), "segfaulter tu dois", 17));
	return (0);
}
 */