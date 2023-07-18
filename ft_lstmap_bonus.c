/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:13:40 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/16 10:36:41 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_item;
	void	*aux;

	if (!lst)
		return (NULL);
	head = NULL;
	while (lst)
	{
		aux = f(lst->content);
		new_item = ft_lstnew(aux);
		if (!new_item)
		{
			del(aux);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new_item);
		lst = lst->next;
	}
	return (head);
}
