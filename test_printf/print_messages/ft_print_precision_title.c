/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_precision_title.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 16:26:21 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/09 16:41:08 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	ft_print_precision_title(const char *str, const char *format,
		int precision, int *num_test)
{
	ft_print_nu_format(num_test, format);
	ft_putstr(" - print >");
	ft_putstr(RED);
	ft_putstr(str);
	ft_putstr(WHITE);
	ft_putstr("< without min_length ");
	ft_putstr("and with precision = \"");
	ft_putnbr(precision);
	ft_putstr("\".\n\n");
}
