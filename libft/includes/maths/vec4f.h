/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4f.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 17:23:29 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/20 20:15:16 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4F_H
# define VEC4F_H

typedef struct s_vec3f	t_vec3f;

# include "vec3f.h"

/*
** Four-dimensional float vector
*/
typedef struct	s_vec4f
{
	float	x;
	float	y;
	float	z;
	float	w;
}				t_vec4f;

/*
** Constructors
*/
t_vec4f			ft_vec4f(float x, float y, float z, float w);

/*
** Operations
*/
float			vec4f_dot(t_vec4f a, t_vec4f b);
t_vec4f			vec4f_scalar(t_vec4f src, float a);

/*
** Casts
*/
t_vec3f			vec4f_to_vec3f(t_vec4f src);

#endif
