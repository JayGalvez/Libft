
#include "libft.h"

char *ft_strnchr (const char *s, int c, size_t n)
{
    /*
    Este bucle se ejecuta mientras queden caracteres por buscar (n sea mayor que 0)
    y mientras no se haya lñlegado al final de la cadena ('*s' no sea caracter nulo '\0
    Esto asegura que la busqueda se detenga cuando se alcance la longitud maxima 
    o el final de la cadena    */
    while (n && *s != '\0')
    {
        /*
        Comparamos el caracter buscado con el caracter actual.
        */
        if (*s == c)
            return (char *)s;//Si el caracter es igual devolvemos el puntero de la cadena donde se encontro el caracter
    s++;
    n--;//Decrementamos el contador de caracteres restantes. 
    }
    if (c == '\0')//Si  c es un puntero.
        return (char *)s;//Devolvemos el puntero al final de la cadena 's'.
    return NULL;
}