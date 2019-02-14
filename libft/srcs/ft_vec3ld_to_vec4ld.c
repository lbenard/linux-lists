/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3ld_to_vec4ld.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 13:27:20 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/08 13:27:34 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec4ld	ft_vec3ld_to_vec4ld(t_vec3ld src)
{
	t_vec4ld	dst;

	dst.x = src.x;
	dst.y = src.y;
	dst.z = src.z;
	dst.w = 1;
	return (dst);
}
