#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    if (s == NULL)
        return (NULL);

    size_t s_len;

    s_len = ft_strlen(s);
    if (start >= s_len)
    {
        char *empty_string = (char *)malloc(1 * sizeof(char));
        if (empty_string == NULL)
            return (NULL);
        empty_string[0] = '\0';
        return (empty_string);
    }

    char *new_string;

    new_string = (char *)malloc((len + 1) * sizeof(char));
    if (new_string == NULL)
        return (NULL);
    ft_strlcpy(new_string, s + start, len + 1); 
    return (new_string);
}
