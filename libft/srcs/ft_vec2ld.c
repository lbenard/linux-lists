/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2ld.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 18:10:43 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/08 13:22:55 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec2ld	ft_vec2ld(long double x, long double y)
{
	t_vec2ld	retval;

	retval.x = x;
	retval.y = y;
	return (retval);
}
