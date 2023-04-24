/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:54:34 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/18 14:41:05 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		pos;
	int		str_len;

	pos = 0;
	str_len = ft_strlen(s) + 1;
	while (pos <= str_len)
	{
		if (s[pos] == c)
			return ((char *)(&s[pos]));
		pos++;
	}
	return (NULL);
}

/* int	main(int argc, char *argv[])
{
	(void)argc;
	printf("LIBFT   : %s\n", ft_strchr(argv[1], (int)*argv[2]));
	printf("Standard: %s\n", strchr(argv[1], (int)*argv[2]));

	return (0);
}
 */