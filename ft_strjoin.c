#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{	
	char		*str;
	size_t		i;
	size_t		len;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (*s1)
	{
		str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		str[i] = *s2;
		i++;
		s2++;
	}
	str[i] = 0;
	return (str);
}
