/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switsh_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 10:37:59 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/01 16:37:56 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 *	les pointeur sur fonctions
 * */

static void	manage_priority_flag(t_format *format)
{
	if (format->flags.dash || format->is_there_precision)
		format->flags.zero = 0;
	if (format->flags.plus)
		format->flags.space = 0;
}


void	ft_switch_type(t_format *format, va_list *ap)
{
	char *types;

	//	ft_put_format(format);

	//	ft_putstr("\n*******************\n");

	manage_priority_flag(format);

	//	ft_put_format(format);

	types = "sSpdDioOuUxXcC";
	if (format->type == 's')
		ft_convert_string(format, ap);
	if (format->type == 'd' || format->type == 'i')
		ft_convert_decimal(format, ap);
	if (format->type == 'c')
		ft_convert_char(format, ap);
	if (format->type == 'C')
		ft_convert_char(format, ap);
	if (format->type == 'p')
		ft_convert_char(format, ap);
	if (format->type == 'h')
		ft_convert_char(format, ap);
	if (format->type == 'o')
		ft_convert_char(format, ap);
	if (format->type == 'u')
		ft_convert_char(format, ap);
/*	if (format->type == 'c')
		ft_convert_char(format, ap);
	if (format->type == 'c')
		ft_convert_char(format, ap);
	if (format->type == 'c')
		ft_convert_char(format, ap);
*/}
