#include    "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str_temp;
	unsigned char	c_temp;
	size_t			i;

	str_temp = (unsigned char *)str;
	c_temp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str_temp == c_temp)
			return (str_temp);
		i++;
	}
	return (NULL);
}
