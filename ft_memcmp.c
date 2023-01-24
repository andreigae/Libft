/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:38:42 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/24 20:23:23 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n){
    // Mientras que n sea mayor que 0
    while (n > 0) {

        // Declarar dos punteros a unsigned char
        unsigned char *ps1 = (unsigned char *)s1;
        unsigned char *ps2 = (unsigned char *)s2;

        // Si los valores de los punteros son diferentes
        if (*ps1 != *ps2) {
            // Devolver la diferencia entre los valores de los punteros
            return (*ps1 - *ps2);
        }

        // Incrementar los punteros
        s1++;
        s2++;
        // Decrementar n
        n--;
    }
    return 0;
};

/************************ TEST ************************/
/*
#include <stdio.h>
int main() {
    int v1 = 10;
    int v2 = 10;
    int result;

    result = ft_memcmp(&v1, &v2, sizeof(int));
    printf("Resultado de la comparación: %d\n", result);
    
    if (result == 0) {
        printf("Las variables son iguales.\n");
    } else if (result > 0) {
        printf("La variable v1 es mayor que v2.\n");
    } else {
        printf("La variable v1 es menor que v2.\n");
    }

    return 0;
}
*/
/*********************** END TEST **********************/
