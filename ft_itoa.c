
#include "libft.h"

static int  ft_len(int n)
{
    int len;

    len = 0;
    if(n <= 0)
        len++;//Si el numero es negativo o cero, incremente la longitud para el '-' o '0'
    
    while (n != 0)
    {
        //Dividimos por 10 para eliminar el ultimo digito.
        n /= 10;
        //Incrementa la longitud por cada digito en el numero.
        len++;
    }
    //Devuelve la longitud total necesaria para representar el numero como cadena.
    return (len);
}
char *ft_itoa(int n)
{
    char    *str;
    int len;

    len = ft_len(n);//Calcula la longitud necesaria para la cadena
    str = (char *)malloc(sizeof(char) * (len + 1));//Reserva memoria para la cadena
    if (!str)
        return (NULL);//Si la reserva de memoria falla, devuelve NULL
    
    str[len] = '\0'; //Añade el caractrer nulo al final de la cadena. 
    if ( n == 0)
        str[0] = '0';//Si el numero es 0, inicializa la cadena con '0';
    if (n < 0)
    {
        str [0] = '-';//Si el numero es negativo, añade '-' al principio.
        n = -n; //Convierte el numero a positivo. 
    }
    while (n >  0)
    {
        str [--len]  = (n % 10) + '0';//Convierte el ultimo digito a caracter y lo añade a la cadena
        n /= 10; //Elimina el ultimo digito del numero
    }
    return (str);
}