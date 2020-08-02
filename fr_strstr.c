/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tantinou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 14:32:08 by tantinou          #+#    #+#             */
/*   Updated: 2020/08/02 17:13:25 by tantinou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

int main()
{
	
	//printf("%d\n", *ft_strstr("12345678", "567"));
	//return 0;
	
	char str1[] = "helloworld";
	char str2[] = "world";
	char *res;
	res = ft_strstr(str1, str2);
	printf(" %s\n", res);
	return 0;
}
