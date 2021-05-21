#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	j = 0;
	len = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (n <= i)
		j = j + n;
	else
		j = j + i;
	while (src[len] && i + 1 < n)
	{
		dest[i] = src[len];
		i++;
		len++;
	}
	dest[i] = '\0';
	return (j);
}
