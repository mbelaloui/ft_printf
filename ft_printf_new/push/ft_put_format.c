/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 11:42:47 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/03 19:13:29 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_len(t_format *format)
{
	ft_putstr("\n -6- len str -> ");
			ft_putchar(format->len_temp);
}

void		ft_put_format(t_format *format)
{
	if (format)
	{
		if (1)//is_valid(format))
		{
			ft_putstr("format valide\n\t\tprint format : \n\n");
			ft_put_flags(format->flags);
			ft_putstr(" -2- specified min lenght ->     ");
			ft_putnbr(format->min_length);
			ft_putstr("\n -3- specified precision ->  ");
			ft_putnbr(format->precision);
			ft_putstr("\n -4- lenght of string -> ");
			ft_putnbr(format->len_temp);
			ft_putstr("\n -5- specified conversion length ->  ");
			ft_putstr(format->prefix);
			ft_putstr("\n -6- specified type -> ");
			ft_putchar(format->type);
			put_len(format);
		}
		else
			ft_putstr("format not valide");
	}
	else
		ft_putstr("format is NULL");
	ft_putstr("\n");
}
