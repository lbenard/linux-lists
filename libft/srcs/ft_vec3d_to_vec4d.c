/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3d_to_vec4d.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 18:14:15 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/08 13:27:37 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec4d	ft_vec3d_to_vec4d(t_vec3d src)
{
	t_vec4d	dst;

	dst.x = src.x;
	dst.y = src.y;
	dst.z = src.z;
	dst.w = 1;
	return (dst);
}
