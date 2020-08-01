
t_dict	*parse_dict(char *path)
{
	int i;
	int fd;
	char str[4096];
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
