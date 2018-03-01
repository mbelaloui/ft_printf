/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_parssing_format.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 12:16:28 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/01 16:39:33 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_get_parssing_format(char *str, t_format *format)
{
	int cp;

	cp = 1;
	while (str[cp] && !ft_is_conversion_type(str[cp]) && str[cp] != '%')
		cp++;
	if (str[cp] == '%' || !str[cp])
		return (-1);
	else
		format->type = str[cp];
	return (cp);
}
