/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 14:49:35 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/02 16:17:28 by cbelva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

int		ft_strlen(char *str)
{
	int	len;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	**split_number_by_triples(char *number)
{
	char	**tab;
	char	*end;
	int		number_len;
	int		tab_len;
	char	*triple;

	end = number;
	while (*end)
		end++;
	number_len = ft_strlen(number, end);
	tab_len = number_len / 3 + number_len % 3 > 0 ? 1 : 0;
	tab = (char**)malloc(tab_len * sizeof(char*));

}
