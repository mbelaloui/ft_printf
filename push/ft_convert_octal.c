/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_octal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 14:50:21 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/01 11:58:49 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		manage_space(long temp, t_format *frmt, int *pt, int shift)
{
	if (((temp >= 0 && frmt->flags.space) && 
				((!frmt->flags.plus) &&
				 (shift == 0 || frmt->flags.dash ))))
	{
		ft_put_buf(' ', PUT_CHAR);
		(*pt)++;
	}
	while (!frmt->flags.dash && shift > 0)
	{
		ft_put_buf(' ', PUT_CHAR);
		shift--;
		(*pt)++;
	}
}

static void		manage_sng_zero(long temp, t_format *f, int nbr_0, int *pt)
{
	if (temp >= 0L && f->flags.plus)
		ft_put_buf('+', PUT_CHAR);
	else if (temp < 0L)
		ft_put_buf('-', PUT_CHAR);
	if (nbr_0 < 0)
		nbr_0 = 0;
	(*pt) += nbr_0;
	while (nbr_0)
	{
		ft_put_buf('0', PUT_CHAR);
		nbr_0--;
	}
}

static void		ft_generat_ret(t_format *format, long temp)
{
	int		size_ret;
	int		nbr_0;
	int		shift;
	int		pt;

	pt = ((format->flags.plus) || temp < 0) ? 1 : 0;
	size_ret = ft_max(format->len_temp, format->precision);
	size_ret = ft_max(size_ret, format->min_length);
	shift = (size_ret - ft_max(format->len_temp, format->precision));
	if (temp < 0 || format->flags.plus)
		shift--;
	nbr_0 = format->precision - format->len_temp;
	manage_space(temp, format, &pt, shift);
	manage_sng_zero(temp, format, nbr_0, &pt);
/*	if ((!(format->min_length <= size_ret && temp == 0) 
				|| (format->convertion.h && format->convertion.nbr_h % 2)) &&
			((format->precision != 0 && temp != 0) || (temp != 0)))
		ft_put_nbr(temp, format);
*/	while (pt + format->len_temp < size_ret)
	{
		ft_put_buf(' ', PUT_CHAR);
		pt++;
	}
}

void			ft_convert_octal(t_format *format, va_list *ap)
{
	long	temp;

	if (format->min_length == -2)
		format->min_length = va_arg(*ap, int);
	if (format->precision == -2)
		format->precision = va_arg(*ap, int);
	if (format->convertion.j)
		temp = (va_arg(*ap, intmax_t));
	else if (format->convertion.z)
		temp = (va_arg(*ap, size_t));
	else
	{
		temp = (va_arg(*ap, int));
		temp = ft_get_convertion_d(temp, format->convertion);
	}
//	temp = 

	format->len_temp = ft_nbrlen(temp);
	if (!format->is_there_precision && format->flags.zero)
		format->precision =  format->min_length - 1;
	if (format->precision <= 0 && !format->is_there_precision)
		format->precision = 1;
	ft_generat_ret(format, temp);
}

/*	if (format->convertion.h)
	{
	if (format->convertion.nbr_h % 2)
	temp = (short) temp;
	else
	temp= (char) temp;
	}
*/

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
