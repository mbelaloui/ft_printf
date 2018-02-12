/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 12:23:06 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/10 14:54:57 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_format	*ft_format_init(void)
{
	t_format *format;

	format = malloc(sizeof(*format));
	format->flags = malloc(sizeof(*format->flags));
	format->flags->dash = 0;
	format->flags->apo = 0;
	format->flags->plus = 0;
	format->flags->hashtag = 0;
	format->flags->zero = 0;
	format->flags->space = 0;
	format->min_length = -1;
	format->precision = -1;
	format->prefix = "!";
	format->type = '!';
	format->len_temp = -1;
	return (format);
}
