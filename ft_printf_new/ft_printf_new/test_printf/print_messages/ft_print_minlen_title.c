/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_minlen_title.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 10:12:40 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/06 13:06:44 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	ft_print_minlen_title(const char *str, const char *format, int min_length, int *num_test)
{
	ft_print_nu_format(num_test, format);
	ft_putstr(" - print >");
	ft_putstr(RED);
	ft_putstr(str);
	ft_putstr(WHITE);
	ft_putstr("< with min_length =  \"");
	ft_putnbr(min_length);
	ft_putstr("\" and without precision.\n\n");
}
