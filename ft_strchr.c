#include "libft.h"

char    *ft_strchr(char *string, int character)
{
    int i;

    i = 0;
    while(string[i] || character == '\0')
    {
        if (string[i] == character)
            return &string[i];
        i++;
    }
    return 0;
}
