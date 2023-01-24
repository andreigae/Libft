/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:39:11 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/24 15:19:45 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c){
    // comprueba si el caracter es una letra mayuscula
    if(c >= 'A' && c <= 'Z'){
        // si es una letra mayuscula devuelve la misma letra pero en minuscula
        return (c + 32);
    }else {
        // si no es una letra mayuscula devuelve el mismo caracter
        return (c);
    }
};


/************************ TEST ************************/
/*
#include <stdio.h>
int main(){
    // Ejemplo de uso
    printf("%c\n", ft_tolower('a'));
    printf("%c\n", ft_tolower('A'));
    printf("%c\n", ft_tolower('0'));
    return (0);
}
*/
/*********************** END TEST **********************/
