#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	v;
	size_t			i;

	v = c;
	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = v;
		i++;
	}
	return (p);
}
