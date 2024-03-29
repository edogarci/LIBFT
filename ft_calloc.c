/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:33:35 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/10 17:09:54 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr_ret;

	ptr_ret = (void *)malloc(number * size);
	if (!ptr_ret)
		return (NULL);
	ft_bzero(ptr_ret, (number * size));
	return (ptr_ret);
}
