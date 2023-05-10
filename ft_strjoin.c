/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:53:12 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/08 17:16:58 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr_ret;
	int		len_s1;
	int		len_s2;

	len_s1 = (int)ft_strlen(s1);
	len_s2 = (int)ft_strlen(s2);

	if (!s1 && !s2)
		return (NULL);
	ptr_ret = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!ptr_ret)
		return (NULL);
	ft_strlcpy(ptr_ret, s1, len_s1 + 1);
	ft_strlcat(ptr_ret, s2, len_s1 + len_s2 + 1);
	return (ptr_ret);
}

/* int main(void)
{
	char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";
	char	*strjoin;

	strjoin = ft_strjoin(s1, s2);
	printf("%s\n", strjoin);
	return (0);
} */