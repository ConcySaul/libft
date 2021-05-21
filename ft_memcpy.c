#include    "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char				*dest_temp;
	const unsigned char			*src_temp;
	size_t						i;

	i = 0;
	dest_temp = (unsigned char *)dest;
	src_temp = (unsigned char *)src;
	while (i < n)
	{
		dest_temp[i] = src_temp[i];
		i++;
	}
	return (dest);
}
