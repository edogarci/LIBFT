/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:56:28 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/05 11:54:18 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <unistd.h>
#include <fcntl.h>

static int	get_number_len(int n)
{
	int		cont;
	char	neg;

	neg = ' ';
	if (n < 0)
		neg = 'X';
	cont = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		cont++;
	}
	if (neg == 'X')
		return (cont + 1);
	else
		return (cont);
}

static char	translate_to_char(int digit)
{
	char ascii;

	if (digit < 0)
		digit = digit * -1;
	ascii = digit + '0';
	return (ascii);
}

static void	iterate_number(int n, int len, char *str)
{
	char	ascii_num;
	char	neg_flag;

	neg_flag = ' ';
	if (n < 0)
		neg_flag = 'X';
	str[len] = '\0';
	len--;
	while ((neg_flag == ' ' && len >= 0)
		|| (neg_flag == 'X' && len > 0))
	{
		ascii_num = translate_to_char(n % 10);
		str[len] = ascii_num;
		n = n / 10;
		len--;
	}
	if (neg_flag == 'X')
		str[len] = '-';
}

char	*ft_itoa(int n)
{
	char	*ptr_ret;
	int		len;

	len = get_number_len(n);
	ptr_ret = malloc((len + 1) * sizeof(char));
	if (!ptr_ret)
		return (NULL);
	iterate_number(n, len, ptr_ret);
	return (ptr_ret);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	pos;

	pos = 0;
    while (s[pos] != '\0')
    {
    	write(fd, &(s[pos]), 1);
		pos++;
    }
} */

void    ft_putnbr_fd(int n, int fd)
{
    char    *num;

    num = ft_itoa(n);
    ft_putstr_fd(num, fd);
}

/* int main(void)
{
    int fd;
    fd = open("test", O_WRONLY);
    ft_putnbr_fd(0, fd);
    return (0);
} */