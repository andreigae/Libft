/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:38:45 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/24 20:09:16 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n){
    // Si dst y src son NULL, devuelve NULL
    if (dst == NULL && src == NULL){
        return NULL;
    }

    // Al no cuplirse el if anterior, siguie el programa
    // Declara dos punteros de tipo unsigned char
    unsigned char *d = (unsigned char *)dst;
    unsigned char *s = (unsigned char *)src;

    // Mientras que n sea mayor a 0
    while(n > 0){
        // Asigna el valor de s a d
        *d = *s;
        // Incrementa d y s, decrementa n
        d++;
        s++;
        n--;
    }
    // Devuelve dst
    return dst;
};

/************************ TEST ************************/
/*
#include <string.h>
#include <stdio.h>
int main(){
    char src[] = "Hello, World!";
    char dst[20];

    ft_memcpy(dst, src, strlen(src) + 1);
    printf("La cadena copiada es: %s\n", dst);

    return 0;
}
*/
/*********************** END TEST **********************/