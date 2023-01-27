/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:39:00 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/27 14:43:49 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t get_lenght(const char *str)
{
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return (size_t)i;
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    // Inicializa la variable i en 0
    size_t i;

    // Obtiene el tamaño de la cadena origen
    size_t src_lenght = get_lenght(src);

    // Inicializa el índice en 0 se usa para recorrer la cadena origen en el while
    i = 0;

    // Si el destino o la cadena origen son nulos, devuelve 0 y genera un segmentation fault
    if(!dst || !src){
        // Genrar un segmentation fault intencional para replicar
        // el comportamiento de la función original
        int *p = NULL;
            *p = 0;
        return 1;
    }

    // Si el tamaño del destino es 0, devuelve el tamaño de la cadena origen
    if (dstsize == 0) {
        return src_lenght;
    }
  
    // Mientras que el caracter actual de la cadena origen no sea el final de la cadena
    // y el índice sea menor que el (tamaño del destino - 1)
    if(dstsize != 0){
        while(src[i] != '\0' && i < dstsize - 1)
        {
            // Copia el caracter actual de la cadena origen en la cadena destino
            dst[i] = src[i];
            // Incrementa el índice
            i++;
        }
        
        if (dstsize < src_lenght){
            dst[dstsize - 1] = '\0';
        } else if (dstsize != 0){
            dst[i] = '\0';
        };
    }
    
    return src_lenght;
    
}

/************************ TEST ************************/
/*
#include <stdio.h>
#include <string.h>

int main() {
    char origen[] = "Hola Mundo";
    char destino[10];

    ft_strlcpy(destino, origen, sizeof(destino));
    
    // TESTING SEGMENTATION FAULT :))
    //ft_strlcpy(NULL, NULL, 10);

    printf("Cadena original: %s\n", origen);
    printf("Cadena copiada: %s\n", destino);

    return 0;
}
*/
/*********************** END TEST **********************/