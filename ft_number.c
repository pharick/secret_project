/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 17:41:12 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/01 19:48:56 by cbelva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int				check_positive_int(char *str)
{
	if (!str)
		return (0);
	if (*str == '+')
		str++;
	while (*str)
	{
		if (!(is_digit*str)
		str++;
	}
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
