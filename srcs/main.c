/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 13:38:20 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/19 17:00:02 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdio.h>
#include "libft.h"
#include "data.h"

static void	print_data(t_data *data)
{
	ft_putnbr_fd(data->data, 2);
	ft_putchar_fd('\n', 2);
}

void		linux_lists_tests(size_t count)
{
	t_list_head	data_list;
	t_data		*to_add;
	size_t		i;

	ft_list_init_head(&data_list);
	i = 0;
	while (i <= count)
	{
		if (!(to_add = new_data((int)i)))
		{
			data_foreach(&data_list, free_data);
			return ;
		}
		ft_list_add_entry(&to_add->node, &data_list);
		i++;
	}
	data_foreach(&data_list, print_data);
	data_foreach(&data_list, free_data);
}

void		cpp_vectors_tests(size_t count)
{
	t_vector	vector;
	size_t		i;
	int			nb;

	vector = ft_vector();
	i = 0;
	while (i <= count)
	{
		nb = (int)i;
		ft_vector_push_back(&vector, &nb, sizeof(nb));
		if (!vector.capacity)
			return ;
		i++;
	}
	i = 0;
	while (i < vector.size / sizeof(int))
	{
		ft_putnbr_fd(((int*)vector.data)[i], 2);
		ft_putchar_fd('\n', 2);
		i++;
	}
	ft_vector_free(&vector);
}

int			main(int ac, char **av)
{
	clock_t	start_time;
	size_t	count;

	if (ac != 3)
		return (-1);
	count = ft_atoi(av[2]);
	if (ft_strcmp(av[1], "linux") == 0)
	{
		printf("Linux-like doubly linked lists count to %lu:\n", count);
		start_time = clock();
		linux_lists_tests(count);
		printf("total time: %.2f\n", (double)(clock() - start_time)
			/ CLOCKS_PER_SEC);
	}
	else if (ft_strcmp(av[1], "c++") == 0)
	{
		printf("C++-like vector count to %lu:\n", count);
		start_time = clock();
		cpp_vectors_tests(count);
		printf("total time: %.2f\n", (double)(clock() - start_time)
			/ CLOCKS_PER_SEC);
	}
}
