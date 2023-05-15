/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:31:25 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/15 12:14:50 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_node;

	if (lst)
	{
		while (*lst != NULL)
		{
			next_node = (*lst)->next;
			ft_lstdelone(*lst, (*del));
			*lst = next_node;
		}
	}
}
