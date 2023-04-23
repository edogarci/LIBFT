/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:18:32 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/22 16:18:32 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	pos;

	pos = 0;
	while (((char *)s1)[pos] != '\0' && ((char *)s2)[pos] != '\0' && n > 0)
	{
		if (((char *)s1)[pos] != ((char *)s2)[pos])
			return ((int)((char *)s1)[pos] - (int)((char *)s2)[pos]);
		n--;
		pos++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	(void)argc;
	printf("LIBFT   : %i\n", ft_memcmp(argv[1], argv[2], (size_t)argv[3]));
	printf("Standard: %i\n", memcmp(argv[1],argv[2],(size_t)argv[3]));

	return (0);
}
