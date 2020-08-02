/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 14:49:35 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/02 19:12:52 by cbelva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parse.h"

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
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
	int		number_len;
	int		tab_len;
	int		last_triple;
	char	*triple;

	number_len = ft_strlen(number);
	tab = (char**)malloc(tab_len * sizeof(char*));


}

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;
	int c;

	a = 0;
	if (to_find[a] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		b = 0;
		if (str[a] == to_find[b])
		{
			c = a;
			while (str[a] == to_find[b])
			{
				if (to_find[b + 1] == '\0')
					return (&str[c]);
				a = a + 1;
				b = b + 1;
			}
			a = c;
		}
		a = a + 1;
	}
	return (0);
}

void    ft_list_clear(t_dict *begin_list)
{
    t_dict *tmp;

    while (begin_list)
    {
        tmp = begin_list;
        begin_list = begin_list->next;
        free(tmp->number);
        free(tmp->str);
        free(tmp);
    }
}
