#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
unsigned char *p_dest = dest;
const unsigned char *p_src = src;

//Copiar byte a byte desde src a dest
while (n--)
{
    *p_dest++ = *p_src++;
}
return (dest);

}