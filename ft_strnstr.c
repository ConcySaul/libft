#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find[j] == 0)
		return ((char *)str);
	while (str[i] && i < n)
	{
		if (to_find[j] == '\0')
			return ((char *)str + i);
		if (str[i + j] == to_find[j])
			j++;
		else
		{
			j = 0;
			i++;
		}
	}
	return (0);
}
