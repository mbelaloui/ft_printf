/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_simple_title.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 11:17:59 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/06 13:51:13 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	ft_print_simple_title(const char *str, const char *format,  int *num_test)
{
	ft_print_nu_format(num_test, format);
	ft_putstr(" - print >");
	ft_putstr(RED);
	ft_putstr(str);
	ft_putstr(WHITE);
	ft_putstr("< without (min_length and precision).\n\n");
}
