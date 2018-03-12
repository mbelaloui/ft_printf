/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_String_with_precision.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 18:04:54 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/07 18:05:00 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int		ft_test_String_with_precision(const char *str,const char*format, int min_length, int *num_test)
{
	int ret1, ret2;

	ft_print_minlen_title(str,format,  min_length, num_test);

		ft_putstr(YELLOW);
	ft_putstr("\t\t - expected print \t>");
		ft_putstr(WHITE);
	ret1 = printf(format ,min_length, str);
	fflush(stdout);
		ft_putstr(YELLOW);
	ft_putstr("<\n\t\t - fonction print \t>");
		ft_putstr(WHITE);
	ret2 = ft_printf(format ,min_length, str);
		ft_putstr(YELLOW);
	ft_putstr("<\n\n");
		ft_putstr(WHITE);
	return (ft_put_result(ret1, ret2));
}

