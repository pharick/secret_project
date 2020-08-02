#include "ft_dict.h"

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
