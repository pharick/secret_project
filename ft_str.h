/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:00:37 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/02 13:02:18 by cmerope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H

# include <stdlib.h>
# include <unistd.h>

void	ft_putstr(char *str);
int		ft_strlen_without_spaces(char *str);
char	*remove_spaces(char *str);
int		ft_strlen(char *start, char *end);
char	*ft_strdup(char *start, char *end);

#endif
