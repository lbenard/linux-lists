/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_scaling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:38:06 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/14 16:12:09 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_mat4	ft_mat4_scaling(t_vec3f scaling)
{
	float	x;
	float	y;
	float	z;

	x = scaling.x;
	y = scaling.y;
	z = scaling.z;
	return ((t_mat4)(struct s_mat4_data) {
		x, 0, 0, 0,
		0, y, 0, 0,
		0, 0, z, 0,
		0, 0, 0, 1
	});
}
