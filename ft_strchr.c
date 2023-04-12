#include "libft.h"

char *ft_strchr(const char *string, int character)
{
	int		i;
	char	ch;

	i = 0;
	ch = character;
	while (string[i] != ch)
	{
		if (string[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)string + i);
}
