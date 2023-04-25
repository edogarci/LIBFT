/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:18:32 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/25 15:33:25 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	pos;

	pos = 0;
	while (n > 0)
	{
		if (((char *)s1)[pos] > ((char *)s2)[pos])
			//return ((int)((char *)s1)[pos] - (int)((char *)s2)[pos]);
			return (1);
		else if (((char *)s1)[pos] < ((char *)s2)[pos])
			return (-1);
		n--;
		pos++;
	}
	return (0);
}

/* int	main(void)
{
	printf("LIBFT   : %i\n", ft_memcmp("t\200", "t\0", 6));
	printf("Standard: %i\n", memcmp("t\200", "t\0", 6));
	return (0);
}
 */