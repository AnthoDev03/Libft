#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	if (size == 0)
		return 0;

	j = 0;
	i = 0;
	while (i < size)
	{
		if (dst[i] == 0)
			break;
		if (i == size - 1 && dst[i])
			return (size + ft_strlen(src));
		++i;
	}
	i = ft_strlen(dst);
	while (i + j < size - 1 && src[j])
	{
		dst[i + j] = src[j];
		++j;
	}
	if (i + j < size)
		dst[i + j] = 0;
	if (size < i)
		return (size + ft_strlen(src));
	return (i + ft_strlen(src));
}
