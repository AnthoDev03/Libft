#include "libft.h"

char* ft_strdup(const char* s) {
    size_t len ;
    char *dup_s;

    len = ft_strlen(s);
    dup_s = (char*)malloc(len + 1);
    if (dup_s != NULL) {
        ft_memcpy(dup_s, s, len + 1);
    }
    return dup_s;
}
