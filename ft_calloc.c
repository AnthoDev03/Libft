#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	total_size;
	void	*memory;

	total_size = num_elements * element_size;
	memory = malloc(total_size);
	if (memory == NULL)
	{
		return (NULL);
	}
	ft_memset(memory, 0, total_size);
	return (memory);
}
