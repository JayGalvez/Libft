
#include "libft.h"

/* Comprueba si el caracter es alfanumerico*/

int ft_isalnum(int c)
{
    //Las condiciones en un return hacen que se evaluen 
    //directamente si una de las condiciones es true o false
    return (ft_isalpha(c) || ft_isdigit(c));
}