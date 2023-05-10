/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:54:49 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/08 17:43:23 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	pos_nee;
	size_t	pos_hay;
	size_t	pos_orig_hay;
	char	flag;

	flag = ' ';
	pos_nee = 0;
	pos_hay = 0;
	pos_orig_hay = 0;
	if (needle[pos_nee] == '\0')
		return ((char *)haystack);
	else
	{
		while (pos_hay < len && haystack[pos_hay] != '\0')
		{	
			if (haystack[pos_hay] == needle[pos_nee])
			{
				if (flag == ' ')
				{
					flag = 'X';
					pos_orig_hay = pos_hay;
				}
				pos_hay++;
				pos_nee++;
				if (needle[pos_nee] == '\0')
					return ((char *)haystack + pos_hay - pos_nee);
			}
			else
			{
				pos_hay = pos_orig_hay + 1;
				pos_orig_hay++;
				pos_nee = 0;
				flag = ' ';
			}
		}
		return (NULL);
	}
}
/* char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	pos_nee;
	size_t	pos_hay;

	pos_nee = 0;
	pos_hay = 0;
	if (needle[pos_nee] == '\0')
		return ((char *)haystack);
	while ((pos_hay < len)
		&& (haystack[pos_hay] != '\0') && (needle[pos_nee] != '\0'))
	//while (pos_hay < len)
	{
		if (len == pos_hay)
			return (NULL);
		if (needle[pos_nee] == haystack[pos_hay])
		{
			if (pos_nee == strlen(needle) - 1)
				return ((char *)haystack + pos_hay - strlen(needle) + 1);
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
} */

/* int	main(void)
{
	char 	haystack[30] = "aaabcabcd";
	char 	needle[10] = "abcd";
	size_t	n = 9;

	printf("LIBFT   : %s\n", ft_strnstr(haystack, needle, n));
} */