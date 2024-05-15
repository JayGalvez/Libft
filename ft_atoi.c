
#include "libft.h"

int ft_atoi(const char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Ignorar espacios en blanco iniciales
    while (str[i] == ' ') {
        i++;
    }

    // Manejar signo
    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    // Convertir caracteres numéricos a números enteros
    while (str[i] >= '0' && str[i] <= '9') {
        //
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

int main() {
    char str[] = "  -1512a45b";
    int num = ft_atoi(str);
    printf("El número es: %d\n", num);  // Output: El número es: 12345
    return 0;
}