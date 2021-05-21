#include    "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_temp;
	char		*src_temp;

	dest_temp = (char *)dest;
	src_temp = (char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (!n || dest_temp == src_temp)
		return (dest);
	if (src_temp < dest_temp)
	{
		n--;
		while (n > 0)
		{
			dest_temp[n] = src_temp[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			dest_temp[i] = src_temp[i];
			i++;
		}
	}
	return (dest);
}
