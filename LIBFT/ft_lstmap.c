/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:13:40 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/12 13:32:45 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
void	*ft_map(void *ct)
{
	int i;
	void	*c;
	char	*pouet;

	c = ct;
	i = -1;
	pouet = (char *)c;
	while (pouet[++i])
		if (pouet[i] == 'o')
			pouet[i] = 'a';
	return (c);
}

void    ft_del(void *content)
{
	free(content);
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

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*last;

	if (lst)
	{
		if (!*lst)
		{
			*lst = new;
		}
		else
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}	
	}
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (lst)
    {
        (*del)(lst->content);
        free(lst);
    }
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *next_node;

    if (lst)
	{
		while (*lst != NULL)
		{
			next_node = (*lst)->next;
			ft_lstdelone(*lst, (*del));
			*lst = next_node;
		}
	}
} */

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_item;

	if (!lst || !f || !del)
		return (NULL);
	head = (void *)0;
	while (lst)
	{
		new_item = ft_lstnew(f(lst->content));
		if (!new_item)
		{
			del(new_item->content);
			ft_lstclear(&head, del);
			return (NULL);
		}
		if (head == NULL)
			head = new_item;
		else
			ft_lstadd_back(&head, new_item);
		lst = lst->next;
	}
	return (head);
}

/* 
int main(void)
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	t_list		*list;
	char		*str = strdup("lorem");
	char		*str2 = strdup("ipsum");
	char		*str3 = strdup("dolor");
	char		*str4 = strdup("sit");

	elem = ft_lstnew(str);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	elem4 = ft_lstnew(str4);

	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;

	list = ft_lstmap(elem, &ft_map, &ft_del);
	return (0);
} */