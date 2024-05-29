
#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{

    /*
    count ->numero de elementos a reservar.
    size -> tamaño de memoria que vanmos a reservar.
    */
    void *ptr;

    ptr = malloc(count * size);//Asignamos la memoria usando malloc
    if (ptr == NULL) //Verificamos si la asignacion de memoria ha sido exitosa
        return (NULL);
    //Inicializamos la memoria asignada con ceros utiolizando memset
    ft_memset(ptr, 0, count * size);
    return (ptr);
}