/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:25:02 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/20 19:38:57 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/str.h"

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (s1 && s2)
		return (ft_strncmp(s1, s2, n) == 0);
	return (0);
}