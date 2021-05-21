#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
