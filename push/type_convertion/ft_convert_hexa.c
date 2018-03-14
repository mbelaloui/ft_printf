/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 13:10:37 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/12 18:09:21 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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
	int 	pt = 0;

	if (!format->is_there_precision && format->flags.zero)
		format->precision =  format->min_length - 1;
	if (format->precision <= 0 && !format->is_there_precision)
		format->precision = 1;
	
	size_ret = ft_max(format->len_temp, format->precision);
	size_ret = ft_max(size_ret, format->min_length);
	shift = (size_ret - ft_max(format->len_temp, format->precision));
	
	put_string(shift, ' ');
	if (temp < 0)
		shift--;
	format->flags.plus = 0;
	while (pt < format->len_temp)
	{
		ft_put_buf(temp[pt], PUT_CHAR);
		pt++;
	}
}

void	ft_convert_hexa(t_format *format, va_list *ap)
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
		temp = ft_get_convertion_size(temp, format->convertion);
	}
	if (format->type == 'X')
		ft_decimal_to_base_stat(temp_tab,temp,EXA,UPPER);
	else
		ft_decimal_to_base_stat(temp_tab,temp,EXA,LOWER);
	format->len_temp = ft_strlen(temp_tab);	
	ft_generat_ret(format, temp_tab);
}
