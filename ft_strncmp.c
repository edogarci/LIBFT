/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:43:05 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/10 17:19:03 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			pos;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	pos = 0;
	if (n == 0)
		return (0);
	while ((pos < n - 1) && (ptr_s1[pos] == ptr_s2[pos])
		&& ptr_s1[pos] != '\0' && ptr_s2[pos] != '\0')
		pos++;
	if ((ptr_s1[pos] - ptr_s2[pos]) < 0)
		return (-1);
	else if ((ptr_s1[pos] - ptr_s2[pos]) > 0)
		return (1);
	else
		return (0);
}
