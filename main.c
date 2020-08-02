/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 16:05:24 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/02 21:20:00 by cbelva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_search.h"
#include "ft_parse.h"
#include "ft_error.h"

int		main(int argc, char **argv)
{
	int		fd;
	t_dict	*list;
	char	*path;
	char	*number;
	
	path = "numbers.dict";
	if (argc > 3 || argc < 2)
		return (ft_error("Error"));
	if (argc == 3)
	{
		path = argv[1];
		number = argv[2];
	}
	else
		number = argv[1];
	if ((fd = open(path, O_RDONLY)) < 0)
		return (1);
	if (!(list = parse_dict(fd)))
		return (ft_error("Dict error"));
	if (close(fd) < 0)
		return (1);
	split_number_by_triples(number, list);
	return (0);
}
