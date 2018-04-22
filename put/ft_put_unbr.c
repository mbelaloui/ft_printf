/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 12:52:48 by mbelalou          #+#    #+#             */
/*   Updated: 2018/04/17 15:40:33 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static void		put_nbr(uintmax_t nbr)
{
	if (nbr / 10)
		put_nbr(nbr / 10);
	ft_put_buf((nbr % 10) + '0', PUT_CHAR);
}

static int		put_zero(t_format *format, uintmax_t nbr)
{
	int		nbr_0;
	int		ret_nbr_put;

	nbr_0 = (format->precision - format->len_temp);
	nbr_0 = (nbr_0 > 0) ? nbr_0 : 0;
	ret_nbr_put = nbr_0;
	while (nbr_0)
	{
		ft_put_buf('0', PUT_CHAR);
		nbr_0--;
	}
	return (ret_nbr_put);
}

static void		put_min_intmax(void)
{
	char *nbr_minint;

	nbr_minint = "9223372036854775808";
	ft_put_str(nbr_minint, 19);
}

int				ft_put_unbr(uintmax_t nbr, t_format *format)
{
	int		pt;

	pt = put_zero(format, nbr);
	if (!(format->precision == 0 && nbr == 0))
		put_nbr(nbr);
	return (pt);
}
