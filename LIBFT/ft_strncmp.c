/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:43:05 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/25 15:05:33 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	pos;

	pos = 0;
	while (n > 0)
	{
		if ((char)s1[pos] > (char)s2[pos])
			return (1);
		else if ((char)s1[pos] < (char)s2[pos])
			return (-1);
		n--;
		pos++;
	}
	return (0);
}

/* int	main(void)
{
	printf("LIBFT   : %i\n", ft_strncmp("test\200", "test\0", 6));
	printf("Standard: %i\n", strncmp("test\200", "test\0", 6));

	return (0);
}
 */