
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char *d = dst;
    const unsigned char *s = src;
    

    //Si las ubicacione de memoria se superponen y src esta antes de dest,
    //es mejor copiar de atras hacia delante hacia adelante para evitar sobrescribir datos.

    if(s < d && s + n > d)
    {
        while (n > 0)
        {
            d[n -1] = s [n -1];
            n--;
        }
        
    }
    else
    {
        while (n > 0)
        {
            *d++ = *s++;
            n--;
        }
        
    }
    return dst;
}