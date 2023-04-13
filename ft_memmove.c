#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	if (n == 0 || p_dest == p_src)
	{
		return (dest);
	}
	if (p_dest < p_src)
	{
		while (n--)
		{
			*p_dest++ = *p_src++;
		}
	}
	else
	{
		p_dest += n - 1;
		p_src += n - 1;
		while (n--)
		{
			*p_dest-- = *p_src--;
		}
	}
	return (dest);
}
