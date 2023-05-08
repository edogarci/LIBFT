/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:56:28 by edogarci          #+#    #+#             */
/*   Updated: 2023/05/08 17:04:53 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <fcntl.h> */
#include "libft.h"

static int	get_math_len(int n)
{	
	int	len;

	len = 1;
	while ((n / 10) != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	get_if_negative(int n)
{
	if (n < 0)
		return ('X');
	else
		return (' ');
}

static int	generate_div_val(int len)
{
	int	div;

	div = 1;
	while ((len - 1) > 0)
	{
		div = div * 10;
		len--;
	}
	return (div);
}

static char	get_if_xtreme_integer(int *n)
{	
	if (*n == -2147483648)
	{
		*n = *n / 10;
		return ('X');
	}
	else
		return (' ');
}

void	ft_putnbr_fd(int n, int fd)
{
	int		len;
	int		div;
	int		n_aux;
	char	xtreme;

	xtreme = get_if_xtreme_integer(&n);
	len = get_math_len(n);
	div = generate_div_val(len);
	if (get_if_negative(n) == 'X')
	{
		ft_putchar_fd('-', fd);
		n_aux = n * -1;
	}
	else
		n_aux = n;
	while (len > 0)
	{
		ft_putchar_fd(((n_aux / div) + '0'), fd);
		n_aux = n_aux % div;
		div = div / 10;
		len--;
	}
	if (xtreme == 'X')
		ft_putchar_fd('8', fd);
}

/* int main(void)
{
    int fd;

    fd = open("test", O_WRONLY);
    ft_putnbr_fd(-2147483648LL, fd);
    return (0);
} */