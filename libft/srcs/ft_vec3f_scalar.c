/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3f_scalar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 17:32:53 by lbenard           #+#    #+#             */
/*   Updated: 2019/01/08 17:33:13 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3f	ft_vec3f_scalar(t_vec3f src, float a)
{
	src.x *= a;
	src.y *= a;
	src.z *= a;
	return (src);
}
