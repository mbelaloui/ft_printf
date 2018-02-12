/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 18:38:52 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/02 19:44:08 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push/ft_printf.h"

void	test(void)
{
	char blabla[] = " ";
	int pt = 0;

	while (pt < ft_strlen(blabla))
	{
		ft_put_buf(blabla[pt], PUT_CHAR);
		pt++;
	}
}
