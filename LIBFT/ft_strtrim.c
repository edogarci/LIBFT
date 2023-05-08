/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:25:42 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/08 15:21:47 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

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

	cont = strlen(s1) - 1;
	while (cont >= 0)
	{
		stop_flag = ' ';
		stop_flag = get_if_char_is_in_set(s1[cont], set);
		if (stop_flag == 'X')
			return (cont);
		cont--;
	}
	if (cont < 0)
		cont = 0;
	return (cont);
}

static void	create_new_string(char const *s1, int start, int end, char *temp)
{
	int	cont;

	cont = 0;
	while (start <= end)
	{
		temp[cont] = s1[start];
		cont++;
		start++;
	}
	temp[cont] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	int		start;
	int		end;
	int		size;

	start = get_trim_from_start(s1, set);
	end = get_trim_from_end(s1, set);
	size = end - start + 1;
	if (size < 0)
		size = 0;
	temp = malloc((size + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	create_new_string(s1, start, end, temp);
	return (temp);
}

/* int main(void)
{
	char	*ptr1;

	ptr1 = ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " ");
	printf("%s\n", ptr1);
	return (0);
}
 */