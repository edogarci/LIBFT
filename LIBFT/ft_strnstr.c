/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:54:49 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/27 19:33:28 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	pos_nee;
	size_t	pos_hay;

	pos_nee = 0;
	pos_hay = 0;
	if (((char *)needle)[pos_nee] == '\0')
		return ((char *)haystack);
	while (haystack[pos_hay] != '\0' && needle[pos_nee] != '\0')
	{
		if (len == pos_hay)
			return (NULL);
		if (needle[pos_nee] == haystack[pos_hay])
		{
			if (pos_nee == ft_strlen(needle) - 1)
				return ((char *)haystack + pos_hay - ft_strlen(needle) + 1);
			else
			{
				pos_nee++;
				pos_hay++;
			}
		}
		else
		{
			pos_nee = 0;
			pos_hay++;
		}
	}
	return (NULL);
}

/* int	main(void)
{
	printf("LIBFT   : %s\n", ft_strnstr("lorem ipsum dolor sit amet", "abcd", 9));
}
 */