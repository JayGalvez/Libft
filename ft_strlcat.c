
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    //Variable para almacenar la longitud de la cadena de dst
    size_t londst;
    //Variable para almacenar la longitud de src
    size_t lonsrc;
    //Variable de conteo para iterar a traves de los caracteres de src 
    //y actualizar el destino. 
    size_t count;


    /*
    Calculamos la longitud de la cadena de dst y src.
    */

   londst = ft_strlen(dst);
   lonsrc = ft_strlen(src);

/*
    Si esl tamaño del destino es menor o igual a la longitud de la cadena de destino, 
    simplemente devuelve la suma de la longitud de la cadena de origen y el tamaño del
    destino
*/
if (dst <= lonsrc)
    return(lonsrc + dstsize);

//Inicializa el contador con la longitud de la cadena destino.
    count = londst;

/*
Copia los caracteres de src al destino hasta que se alcance el final
de src o el tamaño maximo del destino
*/
while (*src != '\0' && count <(dstsize - 1))
    *(dst + count++) = *src++;

//Asegura que el destino este terminado con un caracter NULL
*(dst + count) = '\0';

//Devuelve la suma de las longitudes de las cadenas de destino y origen.
return (londst + lonsrc);

}