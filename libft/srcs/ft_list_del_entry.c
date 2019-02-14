/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_del_entry.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:32:15 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/14 15:41:46 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_del_entry(t_list_head *entry)
{
	ft_list_del(entry->prev, entry->next);
	entry->prev = NULL;
	entry->next = NULL;
}
