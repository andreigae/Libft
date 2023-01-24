/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:39:04 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/24 17:03:57 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n){
    // itera sobre los dos strings mientras que n sea mayor que 0
    while (n>0) {
        // si los dos caracteres son diferentes
        if (*s1 != *s2) {
            // devuelve la diferencia entre los dos caracteres y sale de la funcion
            return *(unsigned char *)s1 - *(unsigned char *)s2;
        } else if (*s1 == '\0') {
            // si los dos caracteres son iguales y s1 es null, devuelve 0
            return 0;
        }
        s1++;
        s2++;
        n--;
    }
    return 0;
};

/************************ TEST ************************/
/*
#include <stdio.h>
int main()
{
   char s1[] = "andrei";
   char s2[] = "andres";
   printf( "Resultado comparacion: %d\n", ft_strncmp( s1, s2, 6 ) );

   return 0;
}
*/
/*********************** END TEST **********************/