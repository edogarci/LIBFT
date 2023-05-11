/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:04:46 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/11 15:51:44 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
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
/* 
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

t_list	*ft_lstnew(void *content)
{
    t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}

int main(void)
{
	t_list *l =  NULL;

	if (ft_lstsize(l) == 0)
				ft_lstadd_front(&l, ft_lstnew((void*)1));
	if (ft_lstsize(l) == 1)
		ft_lstadd_front(&l, ft_lstnew((void*)2));
	if (ft_lstsize(l) == 2)
		write(1, "\n", 1);
	return (0);
} */
