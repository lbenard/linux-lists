/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:34:39 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/14 17:31:55 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

# include "libft.h"

typedef struct	s_data
{
	int			data;
	t_list_head	node;
}				t_data;

t_data			*new_data(int data);
t_data			*data_from_list(t_list_head *list);
void			data_foreach(t_list_head *list, void (*fn)());
void			free_data(t_data *self);

#endif
