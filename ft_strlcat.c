/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:38:58 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/27 17:16:37 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize){

    size_t i;
	size_t j;
    i = 0;
    j = 0;
    

    while(dst[i] != '\0'){
        i++;
    }

	if (dstsize <= i){
        return (dstsize + i);
    }
	


    while(src[j] != '\0' && i+1 < dstsize){
        dst[i] = src[j];
        i++;
        j++;
    }

    dst[i] = '\0';
   
    return i;



};


/************************ TEST ************************/

#include <string.h>
#include <stdio.h>

int main() {
    char dest[20] = "Hola";
    char src[] = " mundo";
    size_t size = 7;

    ft_strlcat(dest, src, size);
    printf("Cadena resultante: %s\n", dest);
    return 0;
}
/*********************** END TEST **********************/