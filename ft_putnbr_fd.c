#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	num;

	if (n < 0)
	{
		write(fd, "-", 1);
		num = (unsigned int)(-n);
	}
	else
	{
		num = (unsigned int)n;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	c = (num % 10) + '0';
	write(fd, &c, 1);
}
