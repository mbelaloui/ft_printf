/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 18:50:17 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/20 19:59:06 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

	char *str = "abcdeFGHIJKLM89";
	int  decimal = MAX_INT;
	int min_len, precision;
	char temp = 0;


int		main(void)
{
//	ft_printf("%ll +-#0123.32215hhhhhhlhjzd");

/*	ft_test_string(str);				//			ok
	char *c = ft_strnew(1);
	c[0] = 'a';
	ft_test_char(c);
*/
	int beggin = 0;
/*	while (beggin < 2)
	{
		ft_test_decimal(beggin++);
	}
*/	ft_test_decimal(0);
	ft_test_decimal(MAX_INT);
	ft_test_decimal(MIN_INT);

	return (0);
}
