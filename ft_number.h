/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbelva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 17:39:00 by cbelva            #+#    #+#             */
/*   Updated: 2020/08/02 16:25:13 by esobchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUMBER_H
# define FT_NUMBER_H

unsigned int	ft_atoi(char *str);
int				check_positive_int(char *str);
int				is_digit(char c);
int				valid_number(char *str);

#endif
