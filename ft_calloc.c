#include "libft.h"

void	*ft_calloc(size_t nmem, size_t size)
{
	void	*mem;

	mem = malloc(nmem * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, (nmem * size));
	return (mem);
}
