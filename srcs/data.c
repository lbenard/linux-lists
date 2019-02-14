/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:36:31 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/14 17:28:40 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "data.h"
#include "libft.h"

t_data	*new_data(int data)
{
	t_data	*ret;

	if (!(ret = (t_data*)malloc(sizeof(t_data))))
		return (NULL);
	ret->data = data;
	ft_list_init_head(&ret->node);
	return (ret);
}

t_data	*data_from_list(t_list_head *list)
{
	return ((t_data*)((char*)list - __builtin_offsetof(t_data, node)));
}

void	data_foreach(t_list_head *list, void (*fn)(t_data*))
{
	t_list_head *pos;

	pos = list;
	while ((pos = pos->next) != list)
		fn(data_from_list(pos));
}

void	free_data(t_data *self)
{
	free(self);
}
