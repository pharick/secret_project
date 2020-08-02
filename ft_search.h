/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 20:43:03 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/02 21:13:45 by cbelva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SEARCH_H
# define FT_SEARCH_H

# include "ft_dict.h"

int     ft_strcmp(char *s1, char *s2);
char    *ft_search_number(char *number, t_dict *list);

#endif
