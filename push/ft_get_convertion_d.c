/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_convertion_d.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 13:06:12 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/27 14:38:42 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static long		get_h(long data, t_convert conv)
{
	if (conv.nbr_h % 2)
		return ((short) data);
	else
		return((char) data);
}

static long		get_l(long data, t_convert conv)
{
	if (conv.nbr_l % 2)
		return ((long) data);
	else
		return((long long) data);
}

long			ft_get_convertion_d(int	data, t_convert conv)
{
	long result;

	result = data;
	if (conv.h)
		return (get_h(result, conv));
	if (conv.l)
		return (get_l(result, conv));
	return (result);
}
