#include "libft.h"

/*

*/

void *ft_memset(void *ptr, int x, size_t n)
{
    unsigned char   *s;
    size_t  i;

    i = 0;
    s = ptr;
    while( i < n)
    {
        //mi str en la posicion i igual a x
        s[i] = (unsigned char)x;
        //y paso a la siguiente referencia de memoria
        i++;
    }
    // devuelve el str modificado
    return (ptr);
}