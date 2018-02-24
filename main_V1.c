/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_V1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 12:20:56 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/24 18:58:35 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push/ft_printf.h"

int		main()
{
	char	*str = "%c";
	int		data = 1286;
//	int		data = 123456;

	data = -3;
	while (data <= 300)
	{
		ft_putnbr(data);
		ft_putstr("\n");
		ft_putstr("printf \t\t>");
		printf(str, data);
		fflush(stdout);
		ft_putstr("<\nftprintf \t>");
		ft_printf(str, data);
		ft_putstr("<\n\n");
		data++;
		if (data== 10)
			data = 120;
		if (data == 130)
			data = 250;
//		ft_temporize(1);
	}
	return (0);
}
