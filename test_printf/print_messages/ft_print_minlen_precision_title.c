/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_minlen_precision_title.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 11:30:33 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/15 23:32:31 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	ft_print_minlen_precision_title(const char *str, const char *format,
		int min_length, int precision, int *num_test)
{
	ft_print_nu_format(num_test, format);
	ft_putstr(" - print >");
	ft_putstr(RED);
	ft_putstr(str);
	ft_putstr(WHITE);
	ft_putstr("< with min_length = \"");
	ft_putnbr(min_length);
	ft_putstr("\" and with precision = \"");
	ft_putnbr(precision);
	ft_putstr("\".\n\n");
}
