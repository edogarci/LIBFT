/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:44:07 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/10 17:12:42 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	pos;

	pos = 0;
	while (s[pos] != '\0')
	{
		write(fd, &(s[pos]), 1);
		pos++;
	}
	if (s)
		ft_putchar_fd('\n', fd);
}
