
#include "libft.h"

#define BLOCK_SIZE sizeof(struct block)

//estructura que representa un bloque de memoria asignada BLOCK_SIZE
struct block
{
    size_t size; //Representa el tamaño del bloque
    struct block *next; //Puntero al siguiente bloque
};

//Puntero al primer bloque asignado
static struct block *head = NULL;

//Funcion para asignar memoria
void *ft_malloc(size_t size)
{
    struct block *curr, *prev;
    void *result;


    if (size == 0)//No se puede asignar memoria de tamaño 0
        return NULL;
    
    //Ajustar el tamaño del bloque para incluir el tamaño de la restructura block
    size_t adjusted_size = size + BLOCK_SIZE;

    curr = head;
    prev = NULL;

    //Buscamos un bloque libre 
    while (curr != NULL)
    {
        if (curr ->size >= adjusted_size)//Si el bloque actual es lo suficientemente grande
        {
            if (prev != NULL)
            {
                prev->next = curr ->next;//Eliminar el bloque actual de la lista        
            }
            else
            {
                head = curr ->next; //Si el bloque actual es el primero de la lista, ajustar head.
            }
        result = (char *)curr +BLOCK_SIZE;//Asignar memoria al usuario (despues de la estructura block)
        return result;
        }
        prev = curr;
        curr = curr ->next;
    }

    //Si no se encontro un bloque lo suficientemente grande, asignar un nuevo bloque. 
    curr = (struct block *) sbrk(adjusted_size);
    if (curr == (void *)-1) //Error al asignar la memoria
        return NULL;
    curr ->size = adjusted_size;
    curr ->next = NULL;
    result = (char *) curr + BLOCK_SIZE;//Asignar la memoria al usuario despues de la estructura block

    //Agregar el nuevo bloque a la lista
    if (head == NULL)
    {
        head = curr;
    }
    else
    {
        prev ->next = curr;
    }
    return result;

}