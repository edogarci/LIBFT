/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:54:49 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/15 16:30:30 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ini_set_var(char *flag, size_t *nee, size_t *hay, size_t *orig)
{
	flag[0] = ' ';
	*nee = 0;
	*hay = 0;
	*orig = 0;
}

static void	assgn_and_increm(char *flag, size_t *orig, size_t *hay, size_t *nee)
{
	if (flag[0] == ' ')
	{
		flag[0] = 'X';
		*orig = *hay;
	}
	(*hay)++;
	(*nee)++;
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	pos_nee;
	size_t	pos_hay;
	size_t	pos_orig_hay;
	char	flag;

	ini_set_var(&flag, &pos_nee, &pos_hay, &pos_orig_hay);
	if (needle[pos_nee] == '\0')
		return ((char *)haystack);
	while (pos_hay < len && haystack[pos_hay] != '\0')
	{	
		if (haystack[pos_hay] == needle[pos_nee])
		{
			assgn_and_increm(&flag, &pos_orig_hay, &pos_hay, &pos_nee);
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
