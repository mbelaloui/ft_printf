/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 12:58:24 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/12 18:54:21 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"



void	ft_generat_char_ret(t_format *format, unsigned char temp)
{
	int		shift;
	int		pt_temp;

	shift = (format->flags.dash) ? 0 : format->min_length - 1;
	pt_temp = shift;
	ft_fill_buf(shift, (format->flags.zero) ? '0' : ' ');
	while (pt_temp < shift + 1)
	{
		ft_put_buf(temp, PUT_CHAR);
		pt_temp++;
	}
	ft_fill_buf(format->min_length - pt_temp, ' ');
}

void	ft_convert_char(t_format *format, va_list *ap)
{
	long	temp;

	if (format->min_length == -2)
		format->min_length = va_arg(*ap, int);
	if (format->precision == -2)
		format->precision = va_arg(*ap, int);
	temp = (int)va_arg(*ap, int);
	if (format->convertion.l && format->convertion.nbr_l % 2 == 1)
	{
		if (temp >= 0 && temp <= 255)
			ft_generat_char_ret(format, temp);
	}
	else
		ft_generat_char_ret(format, (unsigned char)temp);
	// appeler generat_wchar_ret
}
/*




static int	get_len_ret(t_format *format)
{
	int size_ret;
	size_ret = ft_max(format->len_temp, format->min_length);
	size_ret = ft_max(1, size_ret);
	return (size_ret);
}

static int	get_pt_start(t_format *format, int size_ret)
{
	if (format->flags.dash)
		return (0);
	return (size_ret - 1);
}

static void		ft_generat_ret(t_format *format, unsigned char temp)
{
	int		shift;
	int		size_ret;
	int		pt_temp;

	size_ret =  get_len_ret(format);
	shift = get_pt_start(format, size_ret);
	pt_temp = 0;
	while (pt_temp < shift)
	{
		ft_put_buf(' ', PUT_CHAR);
		pt_temp++;
	}
	while (pt_temp < shift + 1)
	{
		ft_put_buf(temp, PUT_CHAR);
		pt_temp++;
	}
	while (pt_temp <size_ret)
	{
		ft_put_buf(' ', PUT_CHAR);
		pt_temp++;
	}
}

void		ft_convert_char(t_format *format, va_list *ap)
{
	long	temp;

	if (format->min_length == -2)
		format->min_length = va_arg(*ap, int);
	if (format->precision == -2)
		format->precision = va_arg(*ap, int);
	temp = (int)va_arg(*ap, int);
	if (format->convertion.l && format->convertion.nbr_l % 2 == 1)
	{
		if (temp >= 0 && temp <= 255)
			ft_generat_ret(format, temp);
	}
	else
		ft_generat_ret(format, (unsigned char )temp);
}*/
