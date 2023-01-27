/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:39:07 by agae-mat          #+#    #+#             */
/*   Updated: 2023/01/27 16:46:54 by agae-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{

    // EJEMPLO - CADENA ORIGINAL: HOLA MUNDO
    // EJEMPLO - CADENA A BUSCAR: MUNDO

    // VAR DECLARATION
    // h: iteracciones de haystack (cadena de origen)
    // n: iteracciones de needle (cadena a buscar)

    size_t h;
	size_t n;

    // Inicializa la iteraciones de haystack en 0
	h = 0;    

    if (!haystack && len == 0){
        return NULL;
    }

    // Si la cadena a buscar es vacía, pero la cadena de origen no, devuelve la cadena de origen
	if (needle[0] == '\0' && haystack[0] != '\0' ){
        return ((char *)haystack);
    }

	
    // Mientras que el caracter actual de la cadena origen no sea el final de la cadena
    // Itera sobre la cadena de origen H - O - L - A - - - M - U - N, etc
	
    while (haystack[h] != '\0')
	{

        // POR CADA ITERACION DE CADA LETRA DE LA CADENA DE ORIGEN
        // SE REINICIA EL CONTADOR DE LA POSICION DE LETRA DE LA CADENA A BUSCAR A 0

        // PARA LA LETRA H = 0 DE LA CADENA DE ORIGEN N = 0, 
        // PARA LA LETRA O = 1 DE LA CADENA DE ORIGEN N = 0,
        // PARA LA LETRA L = 2 DE LA CADENA DE ORIGEN N = 0,

        n = 0;
        
        // ALGORITMO DE BUSQUEDA EXPLICADO

        //      (h=0+n=0: haystack[0]: H) ==  (n = 0: needle[0]: M) && ( h = 0 + n = 0 => 0 ) < len = 12)
        //      (h=0+n=1: haystack[1]: O) ==  (n = 1: needle[1]: U) && ( h = 0 + n = 1 => 1 ) < len = 12)
        //      (h=0+n=2: haystack[2]: L) ==  (n = 2: needle[2]: N) && ( h = 0 + n = 2 => 2 ) < len = 12) 
        //      (h=0+n=3: haystack[3]: A) ==  (n = 3: needle[3]: D) && ( h = 0 + n = 3 => 3 ) < len = 12)
        //      (h=0+n=4: haystack[4]:  ) ==  (n = 4: needle[4]: O) && ( h = 0 + n = 4 => 4 ) < len = 12)
        //      (h=0+n=5: haystack[5]: M) ==  (n = 5: needle[5]: \0) && ( h = 0 + n = 5 => 5 ) < len = 12)
        //      (h=0+n=6: haystack[6]: U) ==  (n = 6: needle[6]: \0) && ( h = 0 + n = 6 => 6 ) < len = 12)

        //     (h=1+n=0: haystack[1]: O) ==  (n = 0: needle[0]: M) && ( h = 0 + n = 0 => 0 ) < len = 12)
        //     (h=1+n=1: haystack[2]: L) ==  (n = 1: needle[1]: U) && ( h = 0 + n = 1 => 1 ) < len = 12)
        //     (h=1+n=2: haystack[3]: A) ==  (n = 2: needle[2]: N) && ( h = 0 + n = 2 => 2 ) < len = 12)
        //     (h=1+n=3: haystack[4]:  ) ==  (n = 3: needle[3]: D) && ( h = 0 + n = 3 => 3 ) < len = 12)
        //     (h=1+n=4: haystack[5]: M) ==  (n = 4: needle[4]: O) && ( h = 0 + n = 4 => 4 ) < len = 12)

        //     (h=2+n=0: haystack[2]: L) ==  (n = 0: needle[0]: M) && ( h = 0 + n = 0 => 0 ) < len = 12)
        //     (h=2+n=1: haystack[3]: A) ==  (n = 1: needle[1]: U) && ( h = 0 + n = 1 => 1 ) < len = 12)
        //     (h=2+n=2: haystack[4]:  ) ==  (n = 2: needle[2]: N) && ( h = 0 + n = 2 => 2 ) < len = 12)
        //     (h=2+n=3: haystack[5]: M) ==  (n = 3: needle[3]: D) && ( h = 0 + n = 3 => 3 ) < len = 12)

        //     (h=3+n=0: haystack[3]: A) ==  (n = 0: needle[0]: M) && ( h = 0 + n = 0 => 0 ) < len = 12)
        //     (h=3+n=1: haystack[4]:  ) ==  (n = 1: needle[1]: U) && ( h = 0 + n = 1 => 1 ) < len = 12)
        //     (h=3+n=2: haystack[5]: M) ==  (n = 2: needle[2]: N) && ( h = 0 + n = 2 => 2 ) < len = 12)
        //     (h=3+n=3: haystack[6]: U) ==  (n = 3: needle[3]: D) && ( h = 0 + n = 3 => 3 ) < len = 12)

        //     (h=4+n=0: haystack[4]:  ) ==  (n = 0: needle[0]: M) && ( h = 0 + n = 0 => 0 ) < len = 12)
        //     (h=4+n=1: haystack[5]: M) ==  (n = 1: needle[1]: U) && ( h = 0 + n = 1 => 1 ) < len = 12)
        //     (h=4+n=2: haystack[6]: U) ==  (n = 2: needle[2]: N) && ( h = 0 + n = 2 => 2 ) < len = 12)
        //     (h=4+n=3: haystack[7]: N) ==  (n = 3: needle[3]: D) && ( h = 0 + n = 3 => 3 ) < len = 12)

//***********************************************************************************************//
        //     (h=5+n=0: haystack[5]: M) ==  (n = 0: needle[0]: M) && ( h = 0 + n = 0 => 0 ) < len = 12)
        //     (h=5+n=1: haystack[6]: U) ==  (n = 1: needle[1]: U) && ( h = 0 + n = 1 => 1 ) < len = 12)
        //     (h=5+n=2: haystack[7]: N) ==  (n = 2: needle[2]: N) && ( h = 0 + n = 2 => 2 ) < len = 12)
        //     (h=5+n=3: haystack[8]: D) ==  (n = 3: needle[3]: D) && ( h = 0 + n = 3 => 3 ) < len = 12)
//**********************************************************************************************//




		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
            // Se ha encontrado la cadena a buscar en la cadena de origen 
			if (haystack[h + n] == '\0' && needle[n] == '\0'){
                return ((char *)&haystack[h]);
            }
			// Iterrar la cadena needle caracter por caracter	
			n++;
		}

        // Si el caracter actual de la cadena a buscar es el final de la cadena
        // Devuelve la cadena de origen desde la posición actual 
        // (obtender la posición actual)
		if (needle[n] == '\0'){
            return ((char *)&haystack[h]);
        }
	
		h++;
	}
	return (0);
};


/************************ TEST ************************/
/*
#include <string.h>
#include <stdio.h>

int main() {
    char str[] = "Hola Mundo!";
    char sub[] = "Mundo";
    
    char *result = ft_strnstr(str, sub, strlen(str));
    if (result) {
        printf("La subcadena se encontró en la posición %ld\n", result - str);
    } else {
        printf("La subcadena no se encontró\n");
    }

    return 0;
}
*/
/*********************** END TEST **********************/