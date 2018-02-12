/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_result.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 11:38:26 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/10 13:00:26 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int		ft_put_result(const int res1, const int res2)
{
	ft_putstr(YELLOW);
	ft_putstr(" - expected return = ");
	ft_putstr(WHITE);
	ft_putnbr(res1);
	ft_putstr(YELLOW);
	ft_putstr("\n - fonction return = ");
	ft_putstr(WHITE);
	ft_putnbr(res2);
	ft_putstr(YELLOW);
	ft_putstr("\n");
	ft_putstr(WHITE);

	if (res1 != res2)
		ft_temporize(10);

	return ((res1 == res2) ? 1 : 0);
}
