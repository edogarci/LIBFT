/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:31:04 by ncolomer          #+#    #+#             */
/*   Updated: 2019/10/10 00:34:34 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static int
	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char
	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = 27;//ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char*)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

char	*ft_strtrim2(char const *s1, char const *set)
{
	int len_s1;
	int len_set;
	int pos_s1;
	int pos_set;

//len de s1
	len_s1 = 0;
	while (s1[len_s1] != '\0')
		len_s1++;

//len de set
	len_set = 0;
	while (s1[len_set] != '\0')
		len_set++;

//encontramos la primera ocurrencia de set en s1
	pos_s1 = 0;
	pos_set = 0;
	while (s1[pos_s1] != '\0')
	{
		while (s1[pos_s1] == set[pos_set])
		{
			pos_s1++;
			pos_set++;
		}
		if (pos_set == len_set)
		{
			//encontrado
		}
		pos_s1++;
	}
}

int main(void)
{
	char str1[] = "edorta garcia gonzalez";
	char str2[] = "edorta garcia gonzalez";
	char set[] = "garc";

	printf("Cadena strtrim1: %s\n", ft_strtrim(str1, set));
	//printf("Cadena strtrim2: %s\n", ft_strtrim2(str2, set));
	return (0);
}