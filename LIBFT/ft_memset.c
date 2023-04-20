/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:12:56 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/19 11:12:56 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n)
{
 	int	cont;

	cont = 0;
	while (cont < n)
	{
		((char *)s)[cont] = c;
		cont++;
	}
	return (s);
}

/* int	main(int argc, char *argv[])
{
	char	str[10];

	strcpy(str, argv[1]);
	printf("Valor de prueba: %s\n", str);

	memset(str, 'X', atoi(argv[2]));
	printf("Resultado MEMSET: %s\n", str);

 	strcpy(str, argv[1]);
	ft_memset(str, 'X', atoi(argv[2]));
	printf("Resultado LIBFT : %s\n", str);

	return (0);
} */