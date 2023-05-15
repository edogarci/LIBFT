/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:04:46 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/15 18:46:14 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cont;

	cont = 0;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		cont++;
	}
	cont++;
	return (cont);
}
