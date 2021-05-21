#include    "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char				*dest_temp;
	const unsigned char			*src_temp;
	unsigned char				c_temp;
	size_t						i;

	i = 0;
	dest_temp = (unsigned char *)dest;
	src_temp = (const unsigned char *)src;
	c_temp = (unsigned char)c;
	while (i < n)
	{
		dest_temp[i] = src_temp[i];
		if (src_temp[i] == c_temp)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
