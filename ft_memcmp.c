#include    "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*str1_temp;
	unsigned char	*str2_temp;
	size_t			i;

	str1_temp = (unsigned char *)str1;
	str2_temp = (unsigned char *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1_temp[i] && str2_temp[i]
		&& str1_temp[i] == str2_temp[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (str1_temp[i] - str2_temp[i]);
}
