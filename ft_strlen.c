#include "libft.h"

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
    while( str[i] !='\0'){
    i++;
    }
    //Return number of character
    return (i);
}

