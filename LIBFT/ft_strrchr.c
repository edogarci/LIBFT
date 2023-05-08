/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:54:34 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/08 17:27:31 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	int		len_s;

	cc = (char)c;
	len_s = (int)ft_strlen(s);
	while (0 <= len_s)
	{
		if (s[len_s] == cc)
			return ((char *)(&s[len_s]));
		len_s--;
	}
	return (NULL);
}

/* int	main(void)
{
	printf("LIBFT: %s\n", ft_strrchr("123456789", 'a'));
	//printf("Stad.: %s\n", strrchr("teste", 'e'));
	return (0);
}
 */