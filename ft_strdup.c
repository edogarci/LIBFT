/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:36:22 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/08 17:16:01 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr_ret;
	size_t	len;

	len = ft_strlen(str);
	len++;
	ptr_ret = (char *)malloc(len * sizeof(char));
	if (!ptr_ret)
		return ((char *) NULL);
	else
	{
		ft_strlcpy(ptr_ret, str, len);
		return (ptr_ret);
	}
}

/* int main(void)
{
    printf("%s\n", ft_strdup("lorem ipsum dolor sit amet"));
    printf("%s\n", strdup("lorem ipsum dolor sit amet"));
    return (0);
} */