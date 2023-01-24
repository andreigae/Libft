/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:09:15 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/24 15:00:28 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c){
    // comprueba si el caracter es una letra
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        // si es una letra devuelve 1
        return (1);
    }else {
        // si no es una letra devuelve 0
        return (0);
    }      
};