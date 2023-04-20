/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:13:22 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/19 13:13:22 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	int cont;

	cont = 0;
	while (cont < n)
	{
		((char *)dest)[cont] = ((char *)src)[cont];
		cont++;
	}
	//((char *)dest)[cont] = '\0';
	return (dest);
}
/* 
int main(int argc, char *argv[])
{
	char src[10];
	char dest1[10];
	char dest2[10];

	strcpy(src, argv[1]);
	printf("Valor de prueba: %s\n", src);

	memmove(dest1, src, atoi(argv[2]));
	printf("Resultado MEMMOVE: %s\n", dest1);

	ft_memmove(dest1, src, atoi(argv[2]));
	printf("Resultado LIBFT: %s\n", dest1);
	return (0);
} */