#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (*s && i <= len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = 0;
	return ((char *)str);
}
