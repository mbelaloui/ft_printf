/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_parssing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 14:44:17 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/24 15:17:22 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_get_parssing(char *str)
{
	int cp;

	cp = 1;
	while (str[cp] && !ft_is_conversion_type(str[cp]) && str[cp] != '%')
		cp++;
	if (str[cp] == '%' || !str[cp])
		return (-1);
	return (cp);
}
