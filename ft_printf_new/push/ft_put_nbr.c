/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 02:58:43 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/10 04:16:59 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_shift(t_format *format)
{
	int pt = (format->min_length - format->precision);
	pt = format->len_temp - pt;
	if (pt < 0)
		pt = 0;
	while (pt > 0)
	{
		ft_put_buf('0', PUT_CHAR);
		pt--;
	}
//	if ()
}

void	ft_put_nbr(long nbr, t_format *format)
{
/*	if (format->flags->plus && nbr > 0L)
		ft_put_buf('+', PUT_CHAR);
	else if (format->flags->plus && nbr < 0L)
		ft_put_buf('-', PUT_CHAR);
	ft_put_shift(format);
	format->flags->plus = 0;
*/	if (nbr < 0)
	{
//		if (nbr == (-2147483648))
//			ft_putstr("2147483648");
///		else
			ft_put_nbr(-nbr, format);
	}
	else
	{
		if (nbr / 10)
			ft_put_nbr(nbr / 10, format);
		ft_put_buf((nbr % 10) + '0', PUT_CHAR);
	}
	(void)format;
}
