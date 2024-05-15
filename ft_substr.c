
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;//donde vamos a copiar la cadena que vanmos a crear y devolver. 
    size_t s_len;//Almacenamos la longitud de la cadena original.
    size_t i; //Contador de bucles para copiar los caracteres de la cadena original a la subcadena.

    //Calculo de la longitud de la cadena original
    size_t s_len = ft_strlen(s);

//Si la cadena original es NULL, retornamos NULL
    if (!s)
		return (NULL);

//Si start es mayor que la longitud de la cadena, no hay subcadena, entonces len debe ser 0
	if (start > ft_strlen(s))
		len = 0;
    //Si len es mayor que la diferencia entre la longnitud de la cadena y start, ajustamos len
    else if (len > (str_len(s) - start))
		len = str_len(s) - start;
    //Asignamos memoria para la subcadena
    substr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!substr)
		return (NULL);
	
    //Copiamos los caracteres de la cadena original a la subcadena
    i = 0;
    while (i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';//Agregamos nulo al final de la subcadena
	return (substr);//Retornamos la subcadena
}


