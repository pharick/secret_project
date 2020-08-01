/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:00:37 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/01 19:53:35 by cbelva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_H
# define FT_DICT_H

# define BUFF_LEN 20

typedef struct	s_dict
{
	char        	*number;
	char	    	*str;
	struct s_dict	*next;
}					t_dict;

t_dict				*parse_line(char *line);

#endif
