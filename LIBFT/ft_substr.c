/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:07:11 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/08 17:28:19 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr_ret;
	int		end;
	int		pos;
	int		real_len;

	if (!s)
		return (NULL);
	real_len = (int)ft_strlen(s);
	if ((int)len > real_len)
		ptr_ret = malloc((real_len + 1) * sizeof(char));
	else
		ptr_ret = malloc((len + 1) * sizeof(char));
	if (!ptr_ret)
		return (NULL);
	else
	{
		ft_bzero(ptr_ret, ((int)len + 1) * sizeof(char));
		pos = 0;
		end = (int)start + (int)len;
		if ((int)start >= (int)ft_strlen(s))
			return (ptr_ret);
		else
		{
			while (((int)start < (int)end) && (s[start] != '\0'))
			{
				ptr_ret[pos] = s[start];
				pos++;
				start++;
			}
			ptr_ret[pos] = '\0';
			return (ptr_ret);
		}
	}	
}

/* int main(void)
{
	char	str[] = "01234";
	char	*strsub;

	strsub = ft_substr(str, 10, 10);
	return (0);
} */