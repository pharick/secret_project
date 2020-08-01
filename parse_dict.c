/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 12:57:58 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/01 16:42:05 by cbelva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_dict.h"

int		is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

t_dict	*create_node(int number, char *str)
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
	if (!number)
		return (NULL);
	start = end + 1;
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
	if (!str)
		return (NULL);
	node = (t_dict*)malloc(sizeof(t_dict));
	if (!node)
		return (NULL);
	node->number = number;
	node->str = str;
	node->next = NULL;
	return (node);
}
