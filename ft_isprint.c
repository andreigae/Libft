/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:38:38 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/24 15:20:28 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint(int c){
    // comprueba si el caracter es imprimible segun la tabla ascii
    if(c >= 32 && c <= 126){
        // si es imprimible devuelve 1
        return (1);
    }else {
        // si no es imprimible devuelve 0
        return (0);
    }
};

/************************ TEST ************************/
/*
#include <stdio.h>
int main(){
    int c = 127;
    printf("%d", ft_isprint(c));
    return (0);
}
*/
/*********************** END TEST **********************/
