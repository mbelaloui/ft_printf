/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 12:58:24 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/24 19:04:05 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		get_pt_start(t_format *format, int *size_ret)
{
	if (format->flags.dash)
		return (0);
	if (format->min_length > format->precision)
		return(format->min_length - format->precision);
	return(format->min_length - format->len_temp);
}

static int		put_string(int max_print, char print)
{
	int pt;

	pt = -1;
	while (++pt < max_print)
		ft_put_buf(print, PUT_CHAR);
	return (pt);
}

static void		ft_generat_ret(t_format *format, char *temp)
{
	int		size_ret;
	int		shift;
	int		nbr_char_put;
	int		pt;

	size_ret =  ft_max(format->len_temp, format->min_length);
	shift = get_pt_start(format, &size_ret);
	nbr_char_put = 0;
	pt = 0;
	nbr_char_put += put_string(shift, ' ');
	while ((pt < format->precision) && (pt < size_ret))
	{
			ft_put_buf(temp[pt], PUT_CHAR);
			pt++;
	}
	nbr_char_put += pt;
	put_string(format->min_length - nbr_char_put, ' ');
}

void			ft_convert_string(t_format *format, va_list *ap)
{
	char	*temp;

	if (format->min_length == -2)
		format->min_length = va_arg(*ap, int);
	if (format->precision == -2)
		format->precision = va_arg(*ap, int);
	temp = va_arg(*ap, char*);
	format->len_temp = ft_strlen(temp);
	if (format->precision == -1 || format->len_temp < format->precision)
		format->precision = format->len_temp;
	ft_generat_ret(format, temp);
}

/*
	ft_putstr("\nat the begining <[shift :");
	ft_putnbr(shift);
	ft_putstr(", size_ret :");
	ft_putnbr(size_ret);
	ft_putstr(", nbr_char_put :");
	ft_putnbr(nbr_char_put);
	ft_putstr(", shift :");
	ft_putnbr(shift);
	ft_putstr(", pt :");
	ft_putnbr(pt);
	ft_putstr(", len_temp :");
	ft_putnbr(format->len_temp);
	ft_putstr(", precision :");
	ft_putnbr(format->precision);
	ft_putstr(", min_length :");
	ft_putnbr(format->min_length);
	ft_putstr("]\n");
*/

/*
	ft_putstr("at the end      <[shift :");
	ft_putnbr(shift);
	ft_putstr(", size_ret :");
	ft_putnbr(size_ret);
	ft_putstr(", nbr_char_put :");
	ft_putnbr(nbr_char_put);
	ft_putstr(", pt :");
	ft_putnbr(pt);
	ft_putstr("]\n\t\t\t\t\t>");*/

