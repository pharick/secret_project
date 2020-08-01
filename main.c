/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 16:05:24 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/01 17:12:06 by cbelva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_dict.h"

int	main(void)
{
	t_dict	*node;

	node = parse_line("16 : sweet sixteen");
	if (!node)
	{
		printf("null\n");
		return (1);
	}
	printf("%s %s\n", node->number, node->str);
	return (0);
}
