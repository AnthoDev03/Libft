#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t src_len;
    size_t i;
    size_t j;

    if (size == 0)
    {
        return 0;
    }

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);

    if (dst_len >= size)
        return (size + src_len);

    i = 0;
    while (dst[i] != '\0' && i < size)
        i++;

    j = 0;
    while (src[j] != '\0' && i + j < size - 1)
    {
        dst[i + j] = src[j];
        j++;
    }

    dst[i + j] = '\0';

    return (dst_len + src_len);
}

