/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3ld_to_vec2ld.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 13:28:05 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/08 13:28:14 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec2ld	ft_vec3ld_to_vec2ld(t_vec3ld src)
{
	t_vec2ld	dst;

	dst.x = src.x;
	dst.y = src.y;
	return (dst);
}
