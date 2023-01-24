/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:39:09 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/24 16:34:03 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *ft_strrchr(const char *s, int c){
    // Definir puntero end en NULL
    char *end;
    end = 0;

    // Recorrer la cadena hasta el final
    while (*s!= '\0'){
        // Si el caracter es igual al caracter pasado por parametro
        if (*s == c){
            // Guarda en end la direccion de memoria del caracter encontrando en string
            end = (char *)s;
        }
        s++;
    }
    // Si el caracter pasado por parametro es un caracter nulo
    if(c == '\0'){
        // devuelve un puntero al final de la cadena de texto s
        return (char *)(s);
    }

    return (end);
};

/************************ TEST ************************/
/*
#include <stdio.h>
int main()
{
   char s[] = "Hola Mundo";
   char c = 'a';
   // se recibe la direccion de memoria donde se encuentra el caracter en s
   // perooo como se usa printf para imprimir el resultado
   // al final se imprime toda la cadena de texto desde el caracter encontrado 
   printf( "strrchr=%s\n", strrchr( s, c ) );

   return 0;
}
*/
/*********************** END TEST **********************/