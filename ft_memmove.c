/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:38:48 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/24 21:00:15 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char	*pdst;
    unsigned char	*psrc;
    size_t			i;

    if(!pdst && !psrc){
        return (NULL);
    }
    
    pdst = (unsigned char *)dst;
    psrc = (unsigned char *)src;
    i = 0;
    if (psrc < pdst)
        while (++i <= len)
            pdst[len - i] = psrc[len - i];
    else
        while (len-- > 0)
            *(pdst++) = *(psrc++);
    return (dst);
}

/************************ TEST ************************/
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "1234567890abcdefghijklnmopqrstuvwxyz";
    char dest[20];
    ft_memmove(dest, str+7, 20);
    printf("La cadena movida es: %s\n", dest);
    return 0;
}
*/
/*********************** END TEST **********************/