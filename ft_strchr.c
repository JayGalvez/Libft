
#include "libft.h"

char *ft_strchr(const char *str, int c)
{
  while (*str != '\0')
  {
        if (*str == c)
		{
            return (char*)str;
        }
        str++;
    }
    	if (c == '\0') //mietntras el caracter sea igual a NULL
		return ((char *) str); // devuelvo un char puntero a la coincidencia
    // Si no se encuentra el carácter, se devuelve NULL
    return NULL;
}