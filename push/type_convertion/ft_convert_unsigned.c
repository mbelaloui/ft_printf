/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_unsigned.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 13:09:27 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/28 13:09:50 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void		ft_generat_ret(t_format *format, long temp)
{
	int		size_ret;
	int		shift;

	size_ret = ft_max(format->len_temp, format->precision);
	size_ret = ft_max(size_ret, format->min_length);
	shift = (size_ret - ft_max(format->len_temp, format->precision));
	if (temp < 0)
		shift--;
	format->flags.plus = 0;	
	ft_put_nbr(temp, format, shift, size_ret);
}

void			ft_convert_unsigned(t_format *format, va_list *ap)
{
	unsigned long	temp;

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
		temp = (unsigned)ft_get_convertion_size(temp, format->convertion);
	}
	format->len_temp = (temp == 0) ? 1 :ft_nbrlen(temp);	
	if (!format->is_there_precision && format->flags.zero)
		format->precision =  format->min_length - 1;
	if (format->precision <= 0 && !format->is_there_precision)
		format->precision = 1;
	ft_generat_ret(format, temp);
}
