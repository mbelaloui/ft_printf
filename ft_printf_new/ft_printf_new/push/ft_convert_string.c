/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 12:58:24 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/08 15:46:45 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_len_ret(t_format *format)
{
	int size_ret;

	size_ret = ft_max(format->len_temp, format->min_length);
	/*	if (format->min_length != 0)
		size_ret = format->min_length;
	else if (format->len_temp > format->precision)
		size_ret = format->precision;
	if (format->min_length > format->len_temp)
		size_ret = format->min_length;
	else if (format->precision > size_ret)
		size_ret = format->len_temp;
	if (format->min_length > format->precision)
		size_ret = format->min_length;
*/	return (size_ret);
}

static int	get_pt_start(t_format *format, int size_ret)
{
	if (format->flags->dash)
		return (0);
	else
	{
		if (format->min_length > format->precision)
			return(format->min_length - format->precision);
		if (size_ret == format->len_temp)
			return (0);
	}
	return (0);
}

static void		ft_generat_ret(t_format *format, char *temp)
{
	int		shift;
	int		size_ret;
	int		pt_temp;

	size_ret = get_len_ret(format);
	shift = get_pt_start(format, size_ret);
	pt_temp = 0;

	int pt = 0;
	pt_temp = 0;
	while (pt_temp < shift)//pt_temp < size_ret && (pt_temp < format->precision || pt_temp < format->min_length))
	{
		ft_put_buf(' ', PUT_CHAR);//ret[pt_ret] = temp[pt_temp];
		pt_temp++;
	}
	while (pt < format->precision && pt < size_ret)//pt_temp < size_ret && (pt_temp < format->precision || pt_temp < format->min_length))
	{
			ft_put_buf(temp[pt], PUT_CHAR);//ret[pt_ret] = temp[pt_temp];
			pt++;
			pt_temp++;
	}
	while (pt_temp <format->min_length)//(pt_temp < shift && pt < shift) || (pt < format->min_length && pt_temp <format->precision))
	{
		ft_put_buf(' ', PUT_CHAR);//ret[pt_ret] = temp[pt_temp];
		pt++;
		pt_temp++;
	}
/*
	ft_putstr("at the end <[shift :");
	ft_putnbr(shift);
	ft_putstr(", size_ret :");
	ft_putnbr(size_ret);
	ft_putstr(", pt_temp :");
	ft_putnbr(pt_temp);
	ft_putstr(", pt :");
	ft_putnbr(pt);
	ft_putstr("]\n");
*/
}

void		ft_convert_string(t_format *format, va_list *ap)
{
	char	*temp;

	if (format->min_length == -2)
		format->min_length = va_arg(*ap, int);
	if (format->precision == -2)
		format->precision = va_arg(*ap, int);
	temp = va_arg(*ap, char*);
	format->len_temp = ft_strlen(temp);
	if (format->precision == -1)
		format->precision = format->len_temp;
	ft_generat_ret(format, temp);
}
