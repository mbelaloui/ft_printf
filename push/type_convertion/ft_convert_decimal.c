/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_decimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 12:46:14 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/02 18:09:48 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void		ft_generat_ret(t_format *format, intmax_t nbr)
{
	int		size_ret;
	int		shift;

	size_ret = ft_max(format->len_temp, format->precision);
	size_ret = ft_max(size_ret, format->min_length);
	shift = (size_ret - ft_max(format->len_temp, format->precision));
	if (nbr < 0 || format->flags.plus)
		shift--;
	ft_put_nbr(nbr, format, shift, size_ret);
}

// faire passer %d, %D, %o, %O, %u, %U, %x, %X
void			ft_convert_decimal(t_format *format, va_list *ap)
{
	intmax_t	nbr;

	if (format->min_length == -2)
		format->min_length = va_arg(*ap, int);
	if (format->precision == -2)
		format->precision = va_arg(*ap, int);
	nbr = ft_get_convertion_size(va_arg(*ap, intmax_t), format->convertion);
	format->len_temp = (nbr == 0) ? 1 :ft_nbrlen(nbr);
	if (!format->is_there_precision && format->flags.zero)
		format->precision =  format->min_length - 1;
	if (format->precision <= 0 && !format->is_there_precision)
		format->precision = 1;
	ft_generat_ret(format, nbr);
}

//	nbr = (va_arg(*ap, intmax_t));

//	ft_putstr("\n");
//	ft_put_format(format);
/*
   ft_putstr("\n");
   ft_putstr("[size_ret : ");
   ft_putnbr(size_ret);
   ft_putstr(", nbr_0 :  ");
   ft_putnbr(nbr_0);
   ft_putstr(", pt :  ");
   ft_putstr(", format->len_temp : ");
   ft_putnbr(format->len_temp);
   ft_putstr(", precision :  ");
   ft_putnbr(format->precision);
   ft_putstr(", shift :  ");
   ft_putnbr(shift);
   ft_putstr(", min_length :  ");
   ft_putnbr(format->min_length);
   ft_putstr(", pt :  ");
   ft_putnbr(pt);
   ft_putstr("]");
   ft_putstr("\n\t\t\t\t\t>");
*/
