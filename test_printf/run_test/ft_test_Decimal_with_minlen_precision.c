/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_Decimal_with_minlen_precision.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 18:23:02 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/23 16:56:53 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int		ft_test_Decimal_with_minlen_precision(const int decimal,const char*format,
		int min_length, int precision, int *num_test)
{
	int ret1, ret2;

	ft_print_minlen_precision_title(ft_itoa(decimal),format, min_length,
			precision, num_test);

		ft_putstr(YELLOW);
	ft_putstr("\t\t - expected print \t>");
		ft_putstr(WHITE);
	ret1 = printf(format ,min_length, precision, decimal);
	fflush(stdout);
		ft_putstr(YELLOW);
	ft_putstr("<\n\t\t - fonction print \t>");
		ft_putstr(WHITE);
	ret2 = ft_printf(format ,min_length, precision, decimal);
		ft_putstr(YELLOW);
	ft_putstr("<\n\n");
		ft_putstr(WHITE);
	return (ft_put_result(ret1, ret2));
}

