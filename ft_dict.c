/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 12:57:58 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/02 13:43:14 by cbelva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"
#include <stdio.h>

t_dict	*create_node(char *number, char *str)
{
	t_dict	*node;

	node = (t_dict*)malloc(sizeof(t_dict));
	if (!node)
		return (NULL);
	node->number = number;
	node->str = str;
	return (node);
}

t_dict	*parse_line(char *line)
{
	char	*number;
	char	*str;
	char	*end;

	end = line;
	while (is_digit(*end))
		end++;
	number = ft_strdup(line, end);
	if (!number)
		return (NULL);
	line = end;
	if (*line == ' ')
		line++;
	if (*line != ':')
		return (NULL);
	line++;
	if (*line == ' ')
		line++;
	end = line;
	while (*end)
		end++;
	str = ft_strdup(line, end);
	if (!str)
		return (NULL);
	return (create_node(number, str));
}

char	*ft_strdup_double(char *str, int lenght)
{
	int		i;
	char	*dest;

	dest = (char*)malloc(sizeof(char) * (lenght * 2 + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	free(str);
	return (dest);
}

void	ft_list_push_front(t_dict **begin_list, t_dict *node)
{
	node->next = *begin_list;
	*begin_list = node;
}

t_dict	*parse_dict(char *path)
{
	int		i;
	int		fd;
	char	*str;
	char	buff;
	t_dict	*list;

	str = (char*)malloc(sizeof(char) * (BUFF_LEN + 1));
	if ((fd = open(path, O_RDONLY)) < 0)
		return (NULL);
	i = 0;
	while (read(fd, &buff, 1))
		if (buff != '\n')
		{
			str[i] = buff;
			i++;
			if (i > BUFF_LEN - 2)
				str = ft_strdup_double(str, i + 1);
		}
		else
		{
			str[i] = '\0';
			ft_list_push_front(&list, parse_line(remove_spaces(str)));
			i = 0;
		}
	if (close(fd) < 0)
		return (NULL);
	return (list);
}
