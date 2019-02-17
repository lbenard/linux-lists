/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 21:06:15 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/17 21:08:30 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	round_to_next_power(size_t size)
{
	size--;
	size |= size >> 1;
	size |= size >> 2;
	size |= size >> 4;
	size |= size >> 8;
	size |= size >> 16;
	size |= size >> 32;
	return (size + 1);
}

t_vector		ft_vector_size(size_t size)
{
	t_vector	ret;
	size_t		next_power;

	next_power = round_to_next_power(size);
	if (!(ret.data = malloc(next_power)))
	{
		ret.capacity = 0;
		ret.size = 0;
		return (ret);
	}
	ret.capacity = next_power;
	ret.size = size;
	ft_bzero(ret.data, size);
	return (ret);
}
