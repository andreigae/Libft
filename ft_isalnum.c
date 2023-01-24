/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:38:28 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/24 15:20:35 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c){
    // Comprueba si la variable que se le pasa es un numero o una letra
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
        // si es un numero o una letra devuelve 1
        return (1);
    }else {
        // si no es un numero o una letra devuelve 0
        return (0);
    }
};