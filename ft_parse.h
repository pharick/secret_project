/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 17:54:29 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/02 21:14:15 by cbelva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSE_H
# define FT_PARSE_H

# include <stdlib.h>
# include "ft_dict.h"
# include "ft_str.h"

int		ft_strlen(char *str);
void	split_number_by_triples(char *number, t_dict *list);
char	*ft_strstr(char *str, char *to_find);
void	ft_list_clear(t_dict *begin_list);

#endif
