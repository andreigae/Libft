/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:38:40 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/24 19:50:47 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n){
    // mientras n sea mayor a 0
    while(n>0){
        // convertir s a unsigned char y asignar a puntero ps
        unsigned char *ps = (unsigned char *)s;
        
        // convertir c a unsigned char y asignar a pc
        unsigned char pc = (unsigned char)c;

        // si el valor de ps es igual a pc
        if(*ps == pc){
            // retornar el valor de s como void * y salir de la funcion
            return (void *)s;
        }
        // decrementar n y aumentar s
        n--;
        s++;
    }
    return 0;
};

/************************ TEST ************************/
/*
#include <stdio.h>
int main() {
   char str[] = "Hello, World!";

    void *result = ft_memchr(str, 'W', strlen(str));
    if (result != NULL) {
        printf("'W' encontrado en la posición: %ld\n", (char *)result - str);
    } else {
        printf("'W' no se encontró en la cadena.\n");
    }
    return 0;
}
*/
/*********************** END TEST **********************/