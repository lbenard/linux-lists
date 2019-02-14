/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_rgb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 16:06:59 by lbenard           #+#    #+#             */
/*   Updated: 2019/01/27 16:08:03 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_rgb	ft_int_to_rgb(t_u32 color)
{
	t_rgb	result;

	result.b = color;
	result.g = color >> 8;
	result.r = color >> 16;
	return (result);
}
