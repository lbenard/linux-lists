/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 13:38:20 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/20 21:48:14 by lbenard          ###   ########.fr       */
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

static void	print_vec(t_vector *vec)
{
	size_t	i;

	i = 0;
	while (i < vec->size / sizeof(int))
	{
		ft_putnbr_fd(((int*)vec->data)[i], 2);
		ft_putchar_fd(' ', 2);
		i++;
	}
	ft_putchar_fd('\n', 2);
}

static void	test_list_push_back(size_t count)
{
	t_list_head	data_list;
	t_data		*to_add;
	size_t		i;

	init_list_head(&data_list);
	i = 0;
	while (i <= count)
	{
		if (!(to_add = new_data((int)i)))
		{
			data_foreach(&data_list, free_data);
			return ;
		}
		list_add_entry(&to_add->node, &data_list);
		i++;
	}
	data_foreach(&data_list, print_data);
	data_foreach(&data_list, free_data);
}

static void	test_vector_push_back(size_t count)
{
	t_vector	vector;
	size_t		i;
	int			nb;

	if (!(init_vector(&vector)))
		return ;
	i = 0;
	while (i <= count)
	{
		nb = (int)i;
		if (!(vector_push_back(&vector, &nb, sizeof(nb))))
		{
			free_vector(&vector);
			return ;
		}
		i++;
	}
	print_vec(&vector);
	free_vector(&vector);
}

static void	test_list_insert(size_t count)
{
	t_list_head	data_list;
	t_data		*to_add;
	size_t		i;

	if (!(init_list_head(&data_list)))
		return ;
	i = 0;
	while (i <= count)
	{
		if (!(to_add = new_data((int)i)))
		{
			data_foreach(&data_list, free_data);
			return ;
		}
		list_add_tail(&to_add->node, &data_list);
		i++;
	}
	data_foreach(&data_list, print_data);
	data_foreach(&data_list, free_data);
}

static void	test_vector_insert(size_t count)
{
	t_vector	vector;
	size_t		i;
	int			nb;

	if (!(init_vector(&vector)))
		return ;
	i = 0;
	while (i <= count)
	{
		nb = (int)i;
		if (!(vector_insert(&vector, 0, &nb, sizeof(nb))))
		{
			free_vector(&vector);
			return ;
		}
		i++;
	}
	print_vec(&vector);
	free_vector(&vector);
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
		printf("Linux-like doubly linked lists push back to %lu:\n", count);
		start_time = clock();
		test_list_push_back(count);
		printf("total time: %.2fs\n", (double)(clock() - start_time)
			/ CLOCKS_PER_SEC);
		printf("Linux-like doubly linked lists insert to %lu:\n", count);
		start_time = clock();
		test_list_insert(count);
		printf("total time: %.2fs\n", (double)(clock() - start_time)
			/ CLOCKS_PER_SEC);
	}
	else if (ft_strcmp(av[1], "c++") == 0)
	{
		printf("C++-like vector push back to %lu:\n", count);
		start_time = clock();
		test_vector_push_back(count);
		printf("total time: %.2fs\n", (double)(clock() - start_time)
			/ CLOCKS_PER_SEC);
		printf("C++-like vector insert to %lu:\n", count);
		start_time = clock();
		test_vector_insert(count);
		printf("total time: %.2fs\n", (double)(clock() - start_time)
			/ CLOCKS_PER_SEC);
	}
}
