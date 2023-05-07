/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:25:42 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/06 17:52:34 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	get_if_char_is_in_set(char c, char const *set)
{
	int	cont;

	cont = 0;
	while (set[cont] != '\0')
	{
		if (c == set[cont])
			return (' ');
		cont++;
	}
	return ('X');
}

static int	get_trim_from_start(char const *s1, char const *set)
{
	char	stop_flag;
	int		cont;

	cont = 0;
	while (s1[cont] != '\0')
	{
		stop_flag = ' ';
		stop_flag = get_if_char_is_in_set(s1[cont], set);
		if (stop_flag == 'X')
			return (cont);
		cont++;
	}
	return (cont);
}

static int	get_trim_from_end(char const *s1, char const *set)
{
	char	stop_flag;
	int		cont;

	cont = ft_strlen(s1) - 1;
	while (cont >= 0)
	{
		stop_flag = ' ';
		stop_flag = get_if_char_is_in_set(s1[cont], set);
		if (stop_flag == 'X')
			return (cont);
		cont--;
	}
	return (cont);
}

static void	create_new_string
(char const *s1, int start, int end, char *ptr)
{
	int	cont;

	cont = 0;
	while (start <= end)
	{
		ptr[cont] = s1[start];
		cont++;
		start++;
	}
	ptr[cont] = '\0';
}

char *ft_strtrim(char const *s1, char const *set)
{
    char	*ptr;
	int		start;
	int		end;

	start = get_trim_from_start(s1, set);
	end = get_trim_from_end(s1, set);
	ptr = malloc((end - start) * sizeof(char));
	if (!ptr)
		return (NULL);
	create_new_string(s1, start, end, ptr);
	return (ptr);
}

/* int main(void)
{
	char	*ptr;

	ptr = ft_strtrim(".teste, bla ,.,.", ",.");
	return (0);
} */