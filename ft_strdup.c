
#include "libft.h"

char *ft_strdup(const char *s)
{
    char *copy;
    size_t len;
    // calculamos la longitud de la cadena, incluyendo el caracter '\0'
    len = ft_strlen(s) + 1;
    copy = (char *)malloc(len); // Asignar memoria para la copia
    if (copy == NULL)           // Verificamos que la asignacion fue exitosa
        return (NULL);
    return (char *)ft_memcpy(copy, s, len); // Copìar la cadena original a la copia.
}