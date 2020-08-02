/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:00:37 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/02 12:54:51 by khotah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_H
# define FT_DICT_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "ft_number.h"
# include "ft_str.h"

# define BUFF_LEN 20

typedef struct	s_dict
{
	char			*number;
	char			*str;
	struct s_dict	*next;
}				t_dict;

t_dict			*parse_line(char *line);
t_dict			*create_node(char *number, char *str);
t_dict			*parse_line(char *line);
char			*ft_strdup_length(char *str, int lenght);
void			ft_list_push_front(t_dict **begin_list, t_dict *node);
t_dict			*parse_dict(char *path);

#endif
