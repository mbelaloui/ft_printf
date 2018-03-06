/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_nbr_shift.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 12:41:41 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/02 12:41:45 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_manage_nbr_shift(long temp, t_format *frmt, int *pt, int shift)
{
	char c;

	c = (frmt->flags.zero) ? '0' : ' ';
	if ((frmt->flags.space && temp >= 0) ||
			(frmt->min_length == 1 && frmt->precision == 0 &&
			 temp == 0 && !frmt->flags.plus))
	{
		ft_put_buf(' ', PUT_CHAR);
		(*pt)++;
		shift--;
	}
	while (!frmt->flags.dash && shift > 0)
	{
		ft_put_buf(c, PUT_CHAR);
		shift--;
		(*pt)++;
	}
}
