#include "libft.h"

char* ft_strrchr(char* str, int c)
{
    int i;
    char* last = 0;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            last = &str[i];
        i++;
    }
    if (str[i] == c)
        last = &str[i];
    return last;
}
