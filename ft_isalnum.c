
#include "libft.h"

/* Comprueba si el caracter es alfanumerico*/

int ft_isalnum(int i)
{
    //Las condiciones en un return hacen que se evaluen 
    //directamente si una de las condiciones es true o false
    return (ft_isalpha(i) || ft_isdigit(i));
}