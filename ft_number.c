/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 17:41:12 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/02 16:36:38 by cbelva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number.h"

int				is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int		validate_number(char *str)
{
	int i;

	i =  0;
	if (str[i] == '\0' || !str)
		return (1);
	if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
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
