#include "libft.h"

int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nbr;

	nbr = n;
	i = ft_numlen(nbr);
	str = (char *)malloc(sizeof(char) * (ft_numlen(nbr) + 1));
	if (str == NULL)
		return (NULL);
	str[i] = 0;
	i--;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (n > 0)
	{
		str[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	return (str);
}
