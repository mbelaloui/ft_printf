/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 02:58:43 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/01 16:15:57 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_nbr(long nbr) // voir pour le %f si c'4est bien d'enlever le static ici
{
	if (nbr / 10)
		put_nbr(nbr / 10);
	ft_put_buf((nbr % 10) + '0', PUT_CHAR);
}

static void	put_zero(int nbr_0, t_format *format, long nbr)
{
	if (format->flags.plus && nbr >= 0)
		ft_put_buf('+', PUT_CHAR);
	if (nbr < 0)
		ft_put_buf('-', PUT_CHAR);
	if (format->precision == 0 && nbr == 0 && format->min_length > 1)
		ft_put_buf(' ', PUT_CHAR);
	while (nbr_0)
	{
		ft_put_buf('0', PUT_CHAR);
		nbr_0--;
	}
}

void		ft_put_nbr(long nbr, t_format *format, int nbr_0, int size_ret)
{
	put_zero(nbr_0, format, nbr);
	if (nbr < 0)
		nbr = -nbr;
	if (!(format->precision == 0 && nbr == 0))
		put_nbr(nbr);
}
