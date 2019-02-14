/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3f_to_vec4f.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:27:59 by lbenard           #+#    #+#             */
/*   Updated: 2019/01/26 18:15:10 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec4f	ft_vec3f_to_vec4f(t_vec3f src)
{
	t_vec4f	dst;

	dst.x = src.x;
	dst.y = src.y;
	dst.z = src.z;
	dst.w = 1;
	return (dst);
}
