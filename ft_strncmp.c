#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int cmp;

    cmp = ft_memcmp(s1, s2, n);
    if (cmp < 0) {
        return -1;
    } else if (cmp > 0) {
        return 1;
    } else {
        return 0;
    }
}
