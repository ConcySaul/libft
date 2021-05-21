#include "libft.h"

size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	*s;

	s = (unsigned char *)str + ft_strlen(str);
	while (s >= (unsigned char *)str)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
