#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (s == NULL || f == NULL)
        return NULL;

    char *fs;
    size_t len_s;
    size_t offset;

    len_s = ft_strlen(s);
    offset = 0;

    fs = (char *)malloc(len_s + 1);
    
    if (fs == NULL)
        return (NULL);
    
    while (offset < len_s) 
    {
        fs[offset] = f(offset, s[offset]);
        offset++;
    }

    fs[len_s] = '\0';
    
    return (fs);
}
