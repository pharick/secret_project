/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 17:41:12 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/02 16:24:21 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number.h"

int				is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int		valid_number(char *str)
{
	int i;

	i =  0;
	if (str[i] == '\0')
		return (1);
	if (str[i] == 43)
		i++;
	while (str[i])
	{
		if (str[i] < 48 && str[i] > 57)
			return (1);
		i++;
	}
	return (0);
}


unsigned int	ft_atoi(char *str)
{
	unsigned int	number;
	int				d;

	number = 0;
	while ((*str >= '0') && (*str <= '9'))
	{
		d = *str - '0';
		number = number * 10 + d;
	}
	return (number);
}
