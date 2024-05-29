
#include "libft.h"

/*test any char for alphabetic char*/

int ft_isalpha(int i)
{
    if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
    {
        return (1);
    }
    else
    {
        return (0);
    }
    
}