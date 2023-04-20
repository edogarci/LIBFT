/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:54:02 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/19 11:54:02 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
 	int	cont;

	cont = 0;
	while (cont < n)
	{
		((char *)s)[cont] = '\0';
		cont++;
	}
}

/* int main(int argc, char *argv[])
{
	char str[10];

	strcpy(str, argv[1]);
	printf("Valor de prueba: %s\n", str);
	ft_bzero(str, atoi(argv[2]));
	printf("Resultado LIBFT: %s\n", str);
	return (0);
}
 */