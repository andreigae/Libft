/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:38:34 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/24 15:32:37 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Esta funcion comprueba si el caracter es ascii entre 0 y 127
int		ft_isascii(int c){
    // si el caracter esta entre 0 y 127 
    if(c >= 0 && c <= 127){
        // devuelve 1
        return (1);
    }else {
        // en caso contrario devuelve 0
        return (0);
    }
};

//************************ TEST ************************/
/*
#include <stdio.h>
int main(){
    int c = 128;
    printf("%d", ft_isascii(c));
    return (0);
}
*/
//*********************** END TEST **********************/