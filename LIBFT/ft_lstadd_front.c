/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:06:48 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/15 11:35:46 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = *lst;
	if (lst)
	{
		if (*lst)
		{
			*lst = new;
			(*lst)->next = aux;
		}
		else
			*lst = new;
	}
}
