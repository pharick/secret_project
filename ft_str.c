#include "ft_str.h"

int ft_strlen_without_spaces(char *str)
{
	int len;
	int	i;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (!(str[i] == ' ' && ((i == 0) || (str[i - 1] == ' ') || (str[i + 1] == '\0'))))
			len++;
		i++;
	}
	return (len);
}

char *remove_spaces(char *str)
{
	char *dest;
	char *iter;
	int i;

	i = 0;
	printf("%d\n", ft_strlen_without_spaces(str));

	dest = (char*)malloc(sizeof(char) * (ft_strlen_without_spaces(str) + 1));
	if (!dest)
		return (NULL);
	iter = dest;
	while (str[i] != '\0')
	{
		if (!(str[i] == ' ' && ((i == 0) || (str[i - 1] == ' ') || (str[i + 1] == '\0'))))
		{
			*iter = str[i];
			iter++;
		}
		i++;
	}
	*iter = '\0';

	return (dest);
}
