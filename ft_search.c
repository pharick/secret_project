/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 20:46:38 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/02 21:00:22 by cbelva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_search.h"

int     ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return ((unsigned char)*s1 - (unsigned char)*s2);
}

char    *ft_search_number(char *number, t_dict *list)
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
