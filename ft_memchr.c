
#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{

    //Convertimos el puntero constr void *s a const unsigned char *
    const unsigned char *ptr = s;
    //Convertimos el caracter int c a unsigned char 
    unsigned char uc = (unsigned char) c;

    while (n--)
    {
        //Iteramos sobre los byte de memoria
        if (*ptr == uc)
        //Devolvemos el puntero al byte encontrado
            return (void *)ptr;
        ptr++;
    }
    return (NULL);
    
}