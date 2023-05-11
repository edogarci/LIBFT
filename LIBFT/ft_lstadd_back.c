/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:09:22 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/11 18:17:28 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <string.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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


size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	pos_dst;
	size_t	pos_src;
	size_t	cont_ret;

	pos_dst = 0;
	pos_src = 0;
	cont_ret = 0;
	if (size != 0)
	{
		while (src[pos_src] != '\0' && pos_src < (size - 1))
		{
			dst[pos_dst] = src[pos_src];
			pos_dst++;
			pos_src++;
		}
		dst[pos_dst] = '\0';
	}
	cont_ret = strlen(src);
	return (cont_ret);
}

char	*ft_strdup(const char *str)
{
	char	*ptr_ret;
	size_t	len;

	len = strlen(str);
	len++;
	ptr_ret = (char *)malloc(len * sizeof(char));
	if (!ptr_ret)
		return ((char *) NULL);
	else
	{
		ft_strlcpy(ptr_ret, str, len);
		return (ptr_ret);
	}
} */

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

/* int main(void)
{
	t_list *l = ((void*)0);
 	t_list *n = ft_lstnew(ft_strdup("OK"));
 
 	ft_lstadd_back(&l, n);
 	if (l == n && !strcmp(l->content, "OK"))
 	{
 		free(l->next);
 		free(l);
 	}
 	free(l->next);
 	free(l);
} */