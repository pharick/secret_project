/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 16:05:24 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/02 14:46:08 by khotah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"
#include "ft_error.h"

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

char	*ft_search_number(char *number, t_dict *list)
{
	t_dict *node;

	node = list;
	if (!node)
		return (NULL);
	while (node->next)
	{
		if (ft_strcmp(number, node->number) == 0)
			return (node->str);
		node = node->next;
	}
	return (NULL);
}

int		main(int argc, char **argv)
{
	int		fd;
	t_dict	*list;
	char	*path;

	path = "numbers.dict";
	if (argc > 3 || argc < 2)
		return (ft_error("Error"));
	if (argc == 3)
	{
		path = argv[1];
	}
	if ((fd = open(path, O_RDONLY)) < 0)
		return (1);
	list = parse_dict(fd);
	if (close(fd) < 0)
		return (1);
	ft_putstr(ft_search_number(argv[1], list));
	return (0);
}
