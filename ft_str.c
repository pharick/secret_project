#include "ft_str.h"

int		ft_strlen(char *start, char *end)
{
	int	len;

	len = 0;
	while (start < end)
	{
		len++;
		start++;
	}
	return (len);
}

char	*ft_strdup(char *start, char *end)
{
	char	*dest;
	char	*iter;
	int		len;

	len = ft_strlen(start, end);
	dest = (char*)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	iter = dest;
	while (start < end)
	{
		*iter = *start;
		iter++;
		start++;
	}
	*iter = '\0';
	return (dest);
}

int 	ft_strlen_without_spaces(char *str)
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

char 	*remove_spaces(char *str)
{
	char *dest;
	char *iter;
	int i;

	i = 0;
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
