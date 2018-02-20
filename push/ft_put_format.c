/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 11:42:47 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/20 19:27:23 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_len(t_format *format)
{
	ft_putstr("\n -7- len param -> ");
			ft_putnbr(format->len_temp);
}

void		ft_put_format(t_format *format)
{
	if (format)
	{
		if (1)//is_valid(format))
		{
			ft_putstr("format valide\n\t\tprint format : \n\n");
			ft_put_flags(&format->flags);
			if (format->is_there_min_length)
			{
				ft_putstr(" -2- specified min lenght ->     ");
				ft_putnbr(format->min_length);
			}
			else
				ft_putstr(" -2- no specified min lenght\n");
			if (format->is_there_precision)
			{
				ft_putstr("\n -3- specified precision ->  ");
				ft_putnbr(format->precision);
			}else
				ft_putstr(" -3- no specified precision");
			ft_putstr("\n -4- lenght of string -> ");
			ft_putnbr(format->len_temp);
			ft_putstr("\n ");//-5- specified conversion length ->  ");
			ft_put_convertion(&format->convertion);//ft_putstr(format->prefix);
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
