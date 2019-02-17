/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_capacity.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 21:04:12 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/17 21:06:05 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector	ft_vector_capacity(size_t capacity)
{
	t_vector	ret;

	ret.size = 0;
	if (!(ret.data = malloc(size)))
	{
		ret.capacity = 0;
		return (ret);
	}
	ret.capacity = capacity;
	return (ret);
}
