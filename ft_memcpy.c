#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			lenght;
	unsigned char	*d;
	const char		*s;

	if (dest == (void *)NULL && src == (void *)NULL)
	{
		return ((void *)NULL);
	}
	d = dest;
	s = src;
	lenght = 0;
	while (lenght < n)
	{
		d[lenght] = s[lenght];
		lenght++;
	}
	return (dest);
}
