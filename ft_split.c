#include "libft.h"

int	ft_count_word(char const *s, char c)
{
	int	word;

	word = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			word++;
			while (*s && *s != c)
				s++;
		}
	}
	return (word);
}

char	*ft_cpy(char const *s, char c)
{
	char	*dest;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i] && s[i] != c)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;

	dest = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			dest[i] = ft_cpy(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	dest[i] = NULL;
	return (dest);
}
