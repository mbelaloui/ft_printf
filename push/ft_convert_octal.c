/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_octal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 14:50:21 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/12 18:09:10 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_generat_ret(t_format *format, long temp)
{
	int		size_ret;
	int		shift;

	format->len_temp = (temp == 0) ? 1 :ft_nbrlen(temp);
	if (!format->is_there_precision && format->flags.zero)
		format->precision =  format->min_length - 1;
	if (format->precision <= 0 && !format->is_there_precision)
		format->precision = 1;
	
	size_ret = ft_max(format->len_temp, format->precision);
	size_ret = ft_max(size_ret, format->min_length);
	shift = (size_ret - ft_max(format->len_temp, format->precision));
	if (temp < 0)
		shift--;
	format->flags.plus = 0;
	ft_put_nbr(temp, format, shift, size_ret);
}

void			ft_convert_octal(t_format *format, va_list *ap)
{
	long	temp;
	char	temp_tab[SIZE_TAB_CONV];

	ft_memset(temp_tab, ' ', sizeof(temp_tab) - 1);
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
	if (format->type == 'O')
		ft_decimal_to_base_stat(temp_tab,temp,OCT,UPPER);
	else
		ft_decimal_to_base_stat(temp_tab,temp,OCT,LOWER);
	temp = ft_atoi(temp_tab);
	ft_generat_ret(format, temp);
}
