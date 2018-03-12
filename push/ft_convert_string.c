/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 12:58:24 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/12 19:55:59 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_generat_ret(t_format *format, char *temp)
{
	int		shift;
	char	padd;
	int		nbr_char_put;
	int		pt;
	int		size_ret;

	shift = (format->flags.dash) ? 0 : format->min_length - format->precision;
	padd = (format->flags.zero) ? '0' : ' ';
	nbr_char_put = ft_fill_buf(shift, padd);
	size_ret =  ft_max(format->len_temp, format->min_length);
	pt  = ft_min(size_ret, format->precision);
	nbr_char_put += ft_put_str(temp, pt);
	ft_fill_buf(format->min_length - nbr_char_put, ' ');
}

void		ft_convert_string(t_format *format, va_list *ap)
{
	char	*temp;

	if (format->min_length == -2)
		format->min_length = va_arg(*ap, int);
	if (format->precision == -2)
		format->precision = va_arg(*ap, int);
	temp = (char *)va_arg(*ap, char*);
	if (temp == NULL)
		temp = "(null)";
	format->len_temp = ft_strlen(temp);
	if (!format->is_there_precision  ||
			((int)format->len_temp < format->precision))
		format->precision = format->len_temp;
	ft_generat_ret(format, temp);
}
