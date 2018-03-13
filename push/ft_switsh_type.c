/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switsh_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 10:37:59 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/12 20:06:17 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 *	les pointeur sur fonctions
 * */

static void	manage_priority_flag(t_format *format)
{
	if (format->type != 'c' && ft_is_convertion_type(format->type))
	{
		if (format->flags.dash || format->is_there_precision)
			format->flags.zero = 0;
	}
	if (format->flags.plus)
		format->flags.space = 0;
}


void	ft_switch_type(t_format *format, va_list *ap)
{
//	char *types;

	manage_priority_flag(format);
//	types = "sSpdDioOuUxXcC";
	if (format->type == 's')
		ft_convert_string(format, ap);
	else if (format->type == 'd' || format->type == 'i')
		ft_convert_decimal(format, ap);
	else if (format->type == 'c')
		ft_convert_char(format, ap);
	else if (format->type == 'o' || format->type == 'O')
		ft_convert_octal(format, ap);
	else if (format->type == 'p')
		ft_convert_char(format, ap);
	else if (format->type == 'u' )
		ft_convert_unsigned(format, ap);
	else if (format->type == 'x' || format->type == 'X')
		ft_convert_hexa(format, ap);
	else
		ft_generat_char_ret(format, format->type);
/*	if (format->type == 'C')
		ft_convert_char(format, ap);
	if (format->type == 'c')
		ft_convert_char(format, ap);
*/}
