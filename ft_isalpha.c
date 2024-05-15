
#include "libft.h"

/*test any char for alphabetic char*/

int is_alpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        return (1);
    }
    else
    {
        return (0);
    }
    
}