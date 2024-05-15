
#include "libft.h"

char    *ft_strnchr(const char *s, int c, size_t n)
{
    //Variable para iterar a traves de los caracteres de la cadena.
    size_t i;

    i = 0;
    /*
    Iteramos a traves de los primeros 'n' de la cadena
    o hasta el final de la cadena
    */
    while (i < n && s[i])
    {
        //comprobar si el caracter actual es igual al caracter buscado
        if (s[i] == c)
            //Devolver un puntero al caracter encontrado
            return ((char *)&s[i]);
        i++;
    }
    if (c == '\0')//Si el caracter encontrado en nulo
        return((char *)&s[i]);//Devolvemos un puntero al final de la cadena.
    //Devolvemos NULL si no se encuentra el caracter buscado.
    return NULL;
}