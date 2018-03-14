/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_buf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 15:11:27 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/10 15:18:00 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_fill_buf(intmax_t max_print, char print)
{
	int pt;

	pt = -1;
	while (++pt < max_print)
		ft_put_buf(print, PUT_CHAR);
	return (pt);
}
