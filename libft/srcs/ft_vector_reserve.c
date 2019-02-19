/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_reserve.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 21:08:58 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/18 21:07:42 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_vector_reserve(t_vector *vector, size_t capacity)
{
	void	*new_data;

	if (vector->capacity >= capacity)
		return ;
	if (!(new_data = malloc(capacity)))
	{
		vector->capacity = 0;
		return ;
	}
	ft_memcpy(new_data, vector->data, vector->capacity);
	free(vector->data);
	vector->data = new_data;
	vector->capacity = capacity;
}
