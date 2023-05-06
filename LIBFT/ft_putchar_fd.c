/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:32:23 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/04 12:55:00 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <fcntl.h> */
#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/* int main(void)
{
    int     fd;
    char	letra;
    
	letra = 'a';
    fd = open("test", O_WRONLY);
    ft_putchar_fd(letra, fd);
    close(fd);
} */