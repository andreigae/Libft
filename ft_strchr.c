/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:38:52 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/24 15:28:12 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c){
    // mientras que la cadena de texo no haya terminado haz lo siguiente
    while(*s != '\0' || c == '\0' ){
        // si el caracter que se le pasa es igual al caracter de la cadena de texto
        // que se esta iterando
        if(*s == c){
            // devuelve un puntero con la direccion de memoria del caracter encontrado
            return (char *)(s);
        }
        // si no es igual al caracter de la cadena de texto que se esta iterando
        // incrementa la posicion de la cadena de texto (pasa a la siguiente posicion)
        s++;
    }
    // si el caracter que se le pasa es un caracter nulo y no se ha encontrado en str
    if(c == '\0'){
        // se devuelve un puntero al final de la cadena de texto s
        return (char *)(s);
    }
    
    // si no se encuentra el caracter devuelve nulo
    return (0);
}


/************************ TEST ************************/
/*
#include <stdio.h>
int main(){
    char *s = "hola";
    int c = 'a';
    printf("%s", ft_strchr(s, c));
    return (0);
}
*/
/*********************** END TEST **********************/
