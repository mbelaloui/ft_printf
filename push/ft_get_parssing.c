/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_parssing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 14:44:17 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/13 19:38:27 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_get_parssing(char *str)
{
	int cp;

	cp = 1;
	while (str[cp] && !ft_is_conversion_type(str[cp]))
		cp++;
	return (cp);
}
