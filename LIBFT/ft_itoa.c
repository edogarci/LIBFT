/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:42:07 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/20 17:47:57 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	get_if_num_is_neg(int n)
{
	if (n < 0)
		return ('X');
	else
		return (' ');
}

static int	get_num_of_digits(int n)
{
	int	cont;

	cont = 0;
	while (n / 10 >= 0)
	{
		n = n / 10;
		cont++;
		if (n == 0)
			break ;
	}
	return (cont);
}

static char	pass_to_char(int num)
{
	if (num == 0)
		return ('0');
	else if (num == 1)
		return ('1');
	else if (num == 2)
		return ('2');
	else if (num == 3)
		return ('3');
	else if (num == 4)
		return ('4');
	else if (num == 5)
		return ('5');
	else if (num == 6)
		return ('6');
	else if (num == 7)
		return ('7');
	else if (num == 8)
		return ('8');
	else if (num == 9)
		return ('9');
}

static void	pass_int_to_str(char *ptr, int n, int num_of_digits)
{
	int		pos;
	int		digit;
	char	c;

	pos = 0;
	while (pos < num_of_digits)
	{
		digit = n % 10;
		n = n / 10;
		c = pass_to_char(digit);
		ptr[pos] = c;
		pos++;
	}
	ptr[pos] = '\0';
	//reverse the string
}

char	*ft_itoa(int n)
{
	char	flag_neg;
	int		num_of_digits;
	char	*ptr;

	flag_neg = get_if_num_is_neg(n);
	if (flag_neg == 'X')
		n = n * -1;
	num_of_digits = get_num_of_digits(n);
	if (flag_neg == 'X')
		ptr = malloc((num_of_digits + 1) * sizeof(int));
	else
		ptr = malloc((num_of_digits) * sizeof(int));
	pass_int_to_str(ptr, n, num_of_digits);
}

int	main(void)
{
	int		num;
	char	*str;

	num = -365;
	str = ft_itoa(num);
	return (0);
}
