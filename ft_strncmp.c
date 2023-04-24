/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:43:05 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/18 14:54:46 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	pos;

	pos = 0;
	while (s1[pos] != '\0' && s2[pos] != '\0' && n > 0)
	{
		if (s1[pos] != s2[pos])
			return ((int)s1[pos] - (int)s2[pos]);
		n--;
		pos++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	(void)argc;
	printf("LIBFT   : %i\n", ft_strncmp(argv[1], argv[2], (size_t)argv[3]));
	printf("Standard: %i\n", strncmp(argv[1], argv[2], (size_t)argv[3]));

	return (0);
}