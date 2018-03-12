/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_Decimal_with_minlen.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 18:21:44 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/23 16:54:47 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int		ft_test_Decimal_with_minlen(const int decimal,const char*format,
		int min_length, int *num_test)
{
	int ret1, ret2;

	ft_print_minlen_title(ft_itoa(decimal),format, min_length, num_test);

		ft_putstr(YELLOW);
	ft_putstr("\t\t - expected print \t>");
		ft_putstr(WHITE);
	ret1 = printf(format ,min_length, decimal);
	fflush(stdout);
		ft_putstr(YELLOW);
	ft_putstr("<\n\t\t - fonction print \t>");
		ft_putstr(WHITE);
	ret2 = ft_printf(format ,min_length, decimal);
		ft_putstr(YELLOW);
	ft_putstr("<\n\n");
		ft_putstr(WHITE);
	return (ft_put_result(ret1, ret2));
}

