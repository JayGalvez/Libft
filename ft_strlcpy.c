
#include "libft.h"
//Funcion para copia y concatenacino de cadenas
size_t ft_strlcpy (char *dst, const char *src, size_t dstsize)
{
//Calculamos la cadena de origen
size_t i;// Variable para iterar a traves de los caracteres de la cadena. 
size_t len;// Variable para almacenar la longitud de la cadena de origen.


len = 0;//Inicializa la longitud de la cadena a 0.
if (src != NULL)
{
    //Obtenemos la longitud de la cadena de origen utilizando ft_strlen.
    len = ft_strlen(src);

    //Verifica si la cadena de destino(dst) no es nula y si el tamaño del destino es distinto a 0.
    if(dst != NULL && dstsize != 0)
    {
        //Inicializamos el indice para iterar a traves de los caracteres del array
        i = 0;
        /*
        1ºCopia los caracteres de la cadena de origen a la cadena de destino.
        2º La copia se detiene cuando se alcanza el tamaño maximo de destino (dstsize) 
           o cuando se llega al final de la cadena de origen.
        */
        while ((i < len) && i < (dstsize -1))
        {
            //Copia el caracter de src en dst.
            dst[i] = src[i];
            //Incrementamos el indice.
            i++;
        }
        //Aseguramos que la cadena de destino este terminada con un '\0'.
        dst[i] = '\0';
        
    }
}

//Devuelve la longitud de la cadena de origen.
return(len);

}