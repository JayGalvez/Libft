
#include <stdio.h>
#include <string.h>
#include "libft.h"


int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        return (1);
    }
    else
    {
        return (0);
    }
    
}

int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
int ft_isalnum(int c)
{
    //Las condiciones en un return hacen que se evaluen 
    //directamente si una de las condiciones es true o false
    return(ft_isalpha(c) || ft_isdigit(c));
}

/**
 * Cuenta el numero de caracteres de un string
 * el parametro char de str es el string que vamos a encontrar en el longitud
 * devuelve la longitud del string
*/
size_t ft_strlen(const char *str)
{
    //Declaramos la variable para el contador
    size_t i;
// igualamos el contador a 0
    i = 0;
    //recorremos el str mientras que el str sea distinto de null
    while( *(str+i) !='\0'){
    i++;
    }
    //Return number of character
    return (i);
}
void *ft_memset(void *ptr, int x, size_t n)
{
    unsigned char   *s;
    size_t  i;

    i = 0;
    s = ptr;
    while( i < n)
    {
        //mi str en la posicion i igual a x
        *(s+i) = (unsigned char)x;
        //y paso a la siguiente referencia de memoria
        i++;
    }
    // devuelve el str modificado
    return (ptr);
}
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

void ft_bzero(void *s, size_t n)
{
    unsigned char *p = s;

    while (n--)
    {
        *p++ = 0;
    }
}

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
int main()
{
    char caracter = '@';
    char *cadena = "Hola mundo";
    char cadena2[]= "Hola mundo2";

    printf("El caracter es: %d \n", ft_isalnum(caracter));
    printf("La longitud de la cadena es: %ld\n", ft_strlen(cadena));
    
    ft_memset(cadena2, '-', 4);
    printf("El cambio de la cadena: %s\n", cadena2);

    //ft_bzero(cadena2, 5);
    // printf("El cambio de la cadena: %s\n", cadena2);

    bzero(cadena2, 4);
    printf("El cambio de la cadena: %s\n", cadena2);

    return (0);
}