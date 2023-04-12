#include "libft.h"

char *ft_strchr(const char *string, int character)
{
    int i;

    i = 0;
    while(string[i] != '\0')
    {
        if (string[i] == character)
            return (char *)&string[i];
        i++;
    }
    if (character == '\0')
        return (char *)&string[i];
    return 0;
}

