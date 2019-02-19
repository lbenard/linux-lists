/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_push_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:14:58 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/18 21:21:58 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_vector_push_back(t_vector *vector, const void *data, size_t size)
{
	size_t	capacity;

	capacity = vector->capacity;
	if (capacity == 0)
		capacity = 1;
	while (vector->size + size > capacity)
		capacity *= 2;
	ft_vector_reserve(vector, capacity);
	if (vector->capacity == 0)
		return ;
	ft_memcpy((t_u8*)vector->data + vector->size, data, size);
	vector->size += size;
}
