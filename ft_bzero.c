/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:38:20 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/24 19:28:33 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_bzero(void *s, size_t n){
    // inicializar el contador a i = 0
    int i = 0;
    // mientras que n sea mayor a 0    
    while(n > 0){
        // asignar el valor de 0 a la posicion i de s
        ((unsigned char *)s)[i] = '\0';
        
        // decrementar n y aumentar i
        n--;
        i++;
    }
};

/************************ TEST ************************/
/*
#include <stdio.h>
int main() {
    char str[20] = "¡Hola Mundo!";
    printf("Cadena original: %s\n", str);
    ft_bzero(str, 5);
    printf("Cadena modificada: %s\n", str);
    return 0;
}
*/
/*********************** END TEST **********************/