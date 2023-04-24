/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:54:49 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/24 12:34:42 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;

	(void)haystack;
	(void)needle;
	(void)len;
	ptr = NULL;
	return (ptr);
}
/* 
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		pos_nee;
	int		pos_hay;
	char	*ptr;

	(void)len;
	pos_hay = 0;
	pos_nee = 0;
	while (needle[pos_nee] != '\0')
	{
		while (haystack[pos_hay] != '\0')
		{
			if (haystack[pos_hay] != needle[pos_nee])
				pos_hay++;
			else
			{
				pos_hay++;
				pos_nee++;
			}
		}
	}
	return (ptr);
}

int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	printf("LIBFT   : %i\n", ft_strnstr(argv[1], argv[2], (size_t)argv[3]));
	printf("Standard: %i\n", strnstr(argv[1], argv[2], (size_t)argv[3]));*/
	//printf("LIBFT   : %s\n", ft_strnstr("edorta esta programando", "esta", (size_t)50));
	//printf("Standard: %s\n", strnstr("edorta esta programando", "esta", (size_t)50));

//	return (0);
//}