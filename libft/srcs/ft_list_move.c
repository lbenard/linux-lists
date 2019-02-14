/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:35:01 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/14 15:48:07 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_move(t_list_head *list, t_list_head *head)
{
	ft_list_del(list->prev, list->next);
	ft_list_add_entry(list, head);
}
