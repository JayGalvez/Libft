
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    int i;
    int j;

    //Comprobar si las cadenas de entrada son NULL;
    if(!s1 || !s2)
        return (NULL);

    //Reservar memoria para la nueva cadena 
    //El tamaño es la suma de las longitudes de s1 y s2, +1
    //para el caracter nulo.
    if (!(str = (char *)malloc(sizeof(*str) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
        return (NULL);

    i = 0;

    //Copiamos los caracteres de s1 a la nueva cadena. 
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    //Copiamos los caracteres de s1 a la nueva cadena. 
    //Comenzamos donde termino s1
    while(s2[j])
    {
        str[i + j] = s2[j];
        j++;
    }
    //Add '\0' al final de la nueva cadena. 
     str[i + j] = '\0';

    //Devolvemos la nueva cadena 
    return(str);
}