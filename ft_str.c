/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmerope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 12:57:28 by cmerope           #+#    #+#             */
/*   Updated: 2020/08/02 16:43:01 by cbelva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

int		ft_strlen_end(char *start, char *end)
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

	if (start >= end)
		return (NULL);
	len = ft_strlen_end(start, end);
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

int		ft_strlen_without_spaces(char *str)
{
	int len;
	int	i;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (!(str[i] == ' ' && ((i == 0) || (str[i - 1] == ' ')
			|| (str[i + 1] == '\0'))))
			len++;
		i++;
	}
	return (len);
}

char	*remove_spaces(char *str)
{
	char	*dest;
	char	*iter;
	int		i;

	i = 0;
	dest = (char*)malloc(sizeof(char) * (ft_strlen_without_spaces(str) + 1));
	if (!dest)
		return (NULL);
	iter = dest;
	while (str[i] != '\0')
	{
		if (!(str[i] == ' ' && ((i == 0) || (str[i - 1] == ' ')
			|| (str[i + 1] == '\0'))))
		{
			*iter = str[i];
			iter++;
		}
		i++;
	}
	*iter = '\0';
	return (dest);
}
