/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:38:50 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/24 20:26:16 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len){
    if(len == 0){
        return b;
    }
    
    int i = 0;
    while((size_t)i < len){
        ((unsigned char *)b)[i] = (unsigned char)c;
        i++;
    }
    return b;
};

/************************ TEST ************************/
/*
#include <stdio.h>
int main() {
    char str[20] = "¡Hola Mundo!";
    printf("Cadena original: %s\n", str);
    ft_memset(str, '-', 5);
    printf("Cadena modificada: %s\n", str);
    return 0;
}
*/
/*********************** END TEST **********************/