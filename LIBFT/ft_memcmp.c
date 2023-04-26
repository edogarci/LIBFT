/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:18:32 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/26 11:46:23 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			pos;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	pos = 0;
	if (n == 0)
		return (0);
	while ((pos < n - 1) && (ptr_s1[pos] == ptr_s2[pos]))
	{
		pos++;
	}
	return (ptr_s1[pos] - ptr_s2[pos]);
}

/* int	main(void)
{
	printf("LIBFT   : %i\n", ft_memcmp("HOLA", "ADIOS", 3));
	printf("Standard: %i\n", memcmp("HOLA", "ADIOS", 3));
	return (0);
}
 */