/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:06:48 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/11 18:20:26 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list; */

#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		else
			*lst = new;
	}
}