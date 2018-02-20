/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_summary.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 11:56:12 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/09 16:25:47 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void		ft_put_summary(int	test_ok, int total_test)
{
	ft_putstr(" - summary it's give you only the size_return - \n");
	ft_putstr("\t * total test \t\t : ");
		ft_putstr(GREEN);
	ft_putnbr(test_ok);
		ft_putstr(WHITE);
	ft_putstr("\n\t * test passed \t\t : ");
		ft_putstr(GREEN);
	ft_putnbr(total_test);
		ft_putstr(WHITE);

	ft_putstr("\n\t * test you have failed\t : ");
	if (test_ok - total_test == 0)
		ft_putstr(GREEN);
	else
		ft_putstr(RED);
	ft_putnbr(test_ok - total_test);
		ft_putstr(WHITE);
	ft_putstr("\n");
}
