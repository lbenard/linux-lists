/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_move_tail.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:12:46 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/14 16:16:07 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_move_tail(t_list_head *list, t_list_head *head)
{
	ft_list_del(list->prev, list->next);
	ft_list_add_tail(list, head);
}
