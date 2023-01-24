/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:39:13 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/24 15:20:06 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c){
    // Comprueba si la variable que se le pasa es una letra minuscula
    if(c >= 'a' && c <= 'z'){
        // Si es una letra minuscula devuelve la misma letra pero en mayuscula
        return (c - 32);
    } else if (c >= 'A' && c <= 'Z'){
        // Si es una letra mayuscula devuelve la misma letra
        return (c);
    } else {
        // si no es una letra devuelve el mismo caracter
        return (c);
    }

};

/************************ TEST ************************/
/*
#include <stdio.h>
int main(){
    // Ejemplo de uso
    printf("%c\n", ft_toupper('a'));
    printf("%c\n", ft_toupper('A'));
    printf("%c\n", ft_toupper('0'));
    return (0);
}
*/
/*********************** END TEST **********************/