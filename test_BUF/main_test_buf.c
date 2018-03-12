/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_buf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 17:38:58 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/02 20:20:42 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push/ft_printf.h"

void	test(void);

int		main(void)
{
	int nbr_print;
	ft_putstr("********************** begin ********************************");

	char tab[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789$I+-*/";
	int  pt = 0;
	ft_putstr("\n>");
	while (pt < ft_strlen(tab))
	{
		ft_put_buf(tab[pt], PUT_CHAR);
		pt++;
		if ((pt % 10) == 0)
			test();
	}
	nbr_print = ft_put_buf(' ', EOL);
	ft_putstr("<\n nbr char printed = ");
	ft_putnbr(nbr_print);
	ft_putstr("\n**********************  end  ********************************");
	return (0);
}
