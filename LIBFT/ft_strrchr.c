/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:54:34 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/18 14:41:13 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	str_len;

	str_len = ft_strlen(s) + 1;
	while (str_len >= 0)
	{
		if (s[str_len] == c)
			return ((char *)(&s[str_len]));
		str_len--;
	}
	return (NULL);
}

/* int	main(int argc, char *argv[])
{
	(void)argc;
	printf("LIBFT   : %s\n", ft_strrchr(argv[1], (int)*argv[2]));
	printf("Standard: %s\n", strrchr(argv[1], (int)*argv[2]));

	return (0);
} */