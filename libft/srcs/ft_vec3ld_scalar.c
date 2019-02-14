/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3ld_scalar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 18:13:42 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/08 13:26:58 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3ld	ft_vec3ld_scalar(t_vec3ld src, long double a)
{
	src.x *= a;
	src.y *= a;
	src.z *= a;
	return (src);
}
