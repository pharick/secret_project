/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 16:05:24 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/01 22:47:51 by cmerope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_dict.h"

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

int	main(void)
{
	t_dict	*list;
    char path[] = "numbers.dict";
    
    

	list = parse_dict(path);
    
	printf("%s", ft_search_number("50", list));
	return (0);
}
