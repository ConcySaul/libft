#include "libft.h"

size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	char	*dup;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen((char *)str);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (0);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
