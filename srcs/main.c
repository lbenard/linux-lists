/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 13:38:20 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/14 17:33:56 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "data.h"

static void	print_data(t_data *data)
{
	ft_putnbr(data->data);
	ft_putchar('\n');
}

int			main(void)
{
	t_list_head	data_list;
	t_data		*to_add;
	size_t		i;

	ft_list_init_head(&data_list);
	i = 0;
	while (i <= 42)
	{
		if (!(to_add = new_data(i)))
		{
			data_foreach(&data_list, free_data);
			return (-1);
		}
		ft_list_add_entry(&new_data(i)->node, &data_list);
		i++;
	}
	data_foreach(&data_list, print_data);
}
