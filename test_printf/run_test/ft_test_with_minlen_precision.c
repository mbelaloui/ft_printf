/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_with_minlen_precision.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 13:02:41 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/06 13:17:43 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int		ft_test_with_minlen_precision(const char *str,const char*format,
		int min_length, int precision, int *num_test)
{
	int ret1, ret2;

	ft_print_minlen_precision_title(str,format, min_length, precision,num_test);

		ft_putstr(YELLOW);
	ft_putstr("\t\t - expected print \t>");
		ft_putstr(WHITE);
	ret1 = printf(format ,min_length, precision, str);
	fflush(stdout);
		ft_putstr(YELLOW);
	ft_putstr("<\n\t\t - fonction print \t>");
		ft_putstr(WHITE);
	ret2 = ft_printf(format ,min_length, precision, str);
		ft_putstr(YELLOW);
	ft_putstr("<\n\n");
		ft_putstr(WHITE);
	return (ft_put_result(ret1, ret2));
}

