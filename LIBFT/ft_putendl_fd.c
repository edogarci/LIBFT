/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:44:07 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/04 17:40:31 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <unistd.h>
#include <fcntl.h>

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
} */

void    ft_putendl_fd(char *s, int fd)
{
	int     pos;

	pos = 0;
    while (s[pos] != '\0')
    {
    	write(fd, &(s[pos]), 1);
		pos++;
    }
    if (s)
        ft_putchar_fd('\n', fd);
}

/* int main(void)
{
    int     fd;
    char	*str = "lorem ipsum dolor sit amet";

    fd = open("test", O_WRONLY);
    ft_putendl_fd(str, fd);
    close(fd);
} */