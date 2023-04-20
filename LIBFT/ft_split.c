/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:30:51 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/19 16:30:51 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c)
{
	int len_s;
    int cont;
    int del_cont;
	int start;
	int end;
	int len;
	char *ptr;
	int cont2;
    char **ptr_array;
    int conter;

	//longitud de s
	len_s = 0;
	while (s[len_s] != '\0')
		len_s++;

    //creamos el array de punteros
    del_cont = 1; //al menos 1 para el puntero a NULL
    cont = 0;
    while (cont <= len_s)
    {
        if (s[cont] == c)
            del_cont++;
        cont++;
    }
    del_cont++;
    ptr_array = malloc(del_cont * (sizeof (char *)));

	cont = 0;
	start = cont;
	end = start;
    conter = 0;
	while (cont <= len_s) {
        //delimitador encontrado
        if (s[cont] == c) {
            //creamos el array
            len = end - start;
            ptr = malloc((len + 1) * sizeof(char));
            cont2 = 0;
            //asignamos el substring al array creado
            while (start <= end) {
                if (start == end)
                {
                    ptr[cont2] = '\0';
                    ptr_array[conter] = ptr;
                    conter++;
                }
                else
                    ptr[cont2] = s[start];
                cont2++;
                start++;
            }
        } else {
            end++;
        }
        cont++;
    }
}

int main(void)
{
    ft_split("esto,es,una,cadena", ',');
    return (0);
}