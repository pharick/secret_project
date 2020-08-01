/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 12:57:58 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/01 17:20:32 by cbelva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_dict.h"

int		is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

t_dict	*create_node(char *number, char *str)
{
	t_dict	*node;

	node = (t_dict*)malloc(sizeof(t_dict));
	if (!node)
		return (NULL);
	node->number = number;
	node->str = str;
	return(node);
}

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

t_dict	*parse_line(char *line)
{
	t_dict	*node;
	char 	*number;
	char	*str;
	char	*start;
	char	*end;

	start = line;
	end = start;
	while (is_digit(*end))
		end++;
	number = ft_strdup(start, end);
	printf("%s\n", number);
	if (!number)
		return (NULL);
	start = end;
	while (*start == ' ')
		start++;
	if (*start != ':')
		return (NULL);
	start++;
	while (*start == ' ')
		start++;
	end = start;
	while (*end)
		end++;
	str = ft_strdup(start, end);
	printf("%s\n", str);
	if (!str)
		return (NULL);
	node = create_node(number, str);
	return (node);
}
