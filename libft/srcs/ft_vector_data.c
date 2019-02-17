/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 20:05:00 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/17 21:04:04 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_vector	ft_vector_data(const void *data, size_t size)
{
	t_vector	ret;

	if (!(ret.data = malloc(size)))
	{
		ret.capacity = 0;
		ret.size = 0;
		return (ret);
	}
	ret.capacity = size;
	ret.size = size;
	ft_memcpy(ret.data, data, size);
	return (ret);
}
