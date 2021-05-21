#include    "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == 'r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	signe;
	int	i;

	res = 0;
	signe = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if ((str[i] == '+' || str[i] == '-')
		&& (str[i + 1] == '+' || str[i + 1] == '-'))
		return (0);
	if ((str[i] == '+' || str[i] == '-')
		&& (str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * signe);
}
