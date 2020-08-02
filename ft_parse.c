/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 14:49:35 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/02 21:03:53 by cbelva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parse.h"
#include "ft_search.h"

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

void	print_triple(char *triple, int n)
{
	int 	rang;

	(void)n;
	rang = 3;
	while (*triple)
	{
		if (*triple != '0')
		{
			ft_putstr(ft_search_number(*triple));
			ft_putstr(" ");
			if (rang > 1)
			ft_putstr(ft_search_number(rang == 3 ? "100" : "10"));
			ft_putstr(" ");
		}
		rang--;
	}
}

void	split_number_by_triples(char *number)
{
	char	**tab;
	int		number_len;
	char	triple[4];
	int		i;

	number_len = ft_strlen(number);
	tab = (char**)malloc((number_len + number_len % 3 > 0 ? 1 : 0) * sizeof(char*));
	i = 0;
	while (i < 3 - number_len % 3)
		triple[i++] = '0';
	while (*number)
	{
		if (i > 2)
		{
			triple[i] = '\0';
			print_triple(triple, 1);
			i = 0;
		}
		triple[i++] = *number;
		number++;
	}
	triple[i] = '\0';
	ft_putstr(triple);
	ft_putstr("\n");
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

void	ft_list_clear(t_dict *begin_list)
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
