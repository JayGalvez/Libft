
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *ptr1 = (const unsigned char *)s1;
    const unsigned char *ptr2 = (const unsigned char *)s2;

    size_t i = 0;

    while (i<0)
    {
        if (ptr1[i] != ptr2 [i])
            return ptr1[i] - ptr2[i];
        i++;
    }
    return(0);
}