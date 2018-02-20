/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nu_format.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 12:15:33 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/08 17:58:51 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	ft_print_nu_format(int *num_test, const char *format)
{
	ft_putstr(" - Test num : ");
		ft_putstr(CYAN);
	ft_putnbr((*num_test)++);
		ft_putstr(WHITE);
	ft_putstr("\t\t ** using format >");
		ft_putstr(MAGENTA);
	ft_putstr(format);
		ft_putstr(WHITE);
	ft_putstr("< **\n\t");
}
