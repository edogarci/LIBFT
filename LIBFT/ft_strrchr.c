/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:54:34 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/27 20:18:11 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	str_len;

	str_len = (int)ft_strlen(s) + 1;
	while (str_len >= 0)
	{
		if (s[str_len] == (char)c)
			return ((char *)(&s[str_len]));
		str_len--;
	}
	return (NULL);
}

/* int	main(void)
{
	printf("LIBFT: %s\n", ft_strrchr("teste", 'e'));
	printf("Stad.: %s\n", strrchr("teste", 'e'));
	return (0);
}
 */