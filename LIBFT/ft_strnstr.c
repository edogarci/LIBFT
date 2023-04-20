/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:54:49 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/18 18:34:33 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	pos_nee;
	int	pos_hay;

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
}
