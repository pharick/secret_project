#include <stdlib.h>

char	*ft_strup(char *str, int lenght)
{
	int 	i;
	char	*dest;

	dest = (char*)malloc(sizeof(char) * lenght);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
		p.
	}
	dest[i] = '\0';
	return (dest);
}

t_dict	*parse_dict(char *path)
{
	int i;
	int fd;
	char str[20];
	char buff;

	fd = open(path, O_RDONLY);
	if (fd == (-1))
	{	
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	i = 0;
	while (read(fd, buf, 1))
	{
		if (buf != '\n')
		{
			str[i] += buff;
			i++;
			if (str[i + 1] =='\0')
				ft_strup(str, i * 2);
		}
		else
		{
			str[i] = '\0';
			noda = parse_line(str);
			i = 0;
		}
	}
	close(fd);
}
