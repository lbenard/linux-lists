/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec4d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 18:16:51 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/08 13:28:52 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec4d	ft_vec4d(double x, double y, double z, double w)
{
	t_vec4d	retval;

	retval.x = x;
	retval.y = y;
	retval.z = z;
	retval.w = w;
	return (retval);
}
