#include "libft.h"

// Función para contar el número de palabras en la cadena s.
int ft_count_words(char const *s, char c)
{
    int count = 0;
    while (*s)
    {
        // Ignorar delimitadores al principio
        while (*s && *s == c)
            s++;
        if (*s) // Si no es el final de la cadena
        {
            count++;
            while (*s && *s != c)
                s++;
        }
    }
    return count;
}

// Función para obtener la longitud de una palabra
static size_t ft_word_len(char const *s, char c)
{
    size_t len = 0;
    while (*s && *s != c)
    {
        len++;
        s++;
    }
    return len;
}

// Función para dividir una cadena en palabras
char **ft_split(char const *s, char c)
{
    int words = ft_count_words(s, c);
    char **array = (char **)malloc(sizeof(char *) * (words + 1));
    if (!array)
        return NULL;

    int i = 0;
    while (*s)
    {
        // Ignorar delimitadores al principio
        while (*s && *s == c)
            s++;
        if (*s) // Si no es el final de la cadena
        {
            size_t word_len = ft_word_len(s, c);
            array[i] = ft_substr(s, 0, word_len);
            if (!array[i])
            {
                // Liberar memoria en caso de error
                while (i > 0)
                    free(array[--i]);
                free(array);
                return NULL;
            }
            i++;
            s += word_len;
        }
    }
    array[i] = NULL;
    return array;
}
