/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:38:36 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/24 15:00:15 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isdigit(int c){
    // comprueba si la variable que se le pasa es un numero
    if(c >= '0' && c <= '9'){
        // si es un numero devuelve 1
        return (1);
    }else {
        // si no es un numero devuelve 0
        return (0);
    }
};