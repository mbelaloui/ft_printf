/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_Char_with_minlen.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 15:12:21 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/01 16:41:34 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int		ft_test_Char_with_minlen(const char *c,const char*format,
		int min_length, int *num_test)
{
	int ret1, ret2;

	ft_print_minlen_title(c,format, min_length, num_test);

		ft_putstr(YELLOW);
	ft_putstr("\t\t - expected print \t>");
		ft_putstr(WHITE);
	ret1 = printf(format ,min_length, c[0]);
	fflush(stdout);
		ft_putstr(YELLOW);
	ft_putstr("<\n\t\t - fonction print \t>");
		ft_putstr(WHITE);
	ret2 = ft_printf(format ,min_length, c[0]);
		ft_putstr(YELLOW);
	ft_putstr("<\n\n");
		ft_putstr(WHITE);
	return (ft_put_result(ret1, ret2));
}

