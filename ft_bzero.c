#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t offset;
	char *p; 
	p = s;
	offset = 0;
	while (offset < n)
	{
		p[offset] = 0 ;
		offset++;
	}
}
