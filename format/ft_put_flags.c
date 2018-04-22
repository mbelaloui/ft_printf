/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 11:31:11 by mbelalou          #+#    #+#             */
/*   Updated: 2018/04/17 15:28:49 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_put_flags(t_flags *flags)
{
	if (flags)
	{
		ft_putstr(" -1- print flags value\n\t- value dash ->      ");
		ft_putnbr((flags->dash) ? 1 : 0);
		ft_putstr("\n\t- value plus ->      ");
		ft_putnbr((flags->plus) ? 1 : 0);
		ft_putstr("\n\t- value hashtag ->   ");
		ft_putnbr((flags->hashtag) ? 1 : 0);
		ft_putstr("\n\t- value zero ->      ");
		ft_putnbr((flags->zero) ? 1 : 0);
		ft_putstr("\n\t- value space ->     ");
		ft_putnbr((flags->space) ? 1 : 0);
		ft_putstr("\n");
	}
	else
		ft_putstr("flags is NULL\n");
}
