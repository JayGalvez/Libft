
#include "libft.h"
#include <string.h>

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
    memset(ptr, 0, count * size);
    return (ptr);
}

int main() {
    int *array;
    int size = 5;

    // Usando calloc para asignar memoria para un array de 5 enteros e inicializarlos a 0
    array = (int *)calloc(size, sizeof(int));

    if (array == NULL) {
        printf("Error: no se pudo asignar memoria");
        return -1;
    }

    // Imprimiendo los valores del array
    printf("Valores del array inicializados a 0:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }
free(array);

    return 0;
}