/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_buf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 17:29:12 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/08 18:02:28 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		rest(t_show *show)
{
	(*show).cp = 0;
	ft_bzero((*show).buf, SIZE_BUF);
	(*show).pt = 0;
	return (0);
}

int		ft_put_buf(const char c, int option)
{
	static t_show show;

	if (option == RESET)
		return(rest(&show));
	if (option == EOL)
		write(1, show.buf, show.pt);
	else
	{
		if (show.pt == SIZE_BUF)
		{
			write(1, show.buf, show.pt);
			show.pt = 0;
		}
		show.buf[show.pt] = c;
		show.pt++;
		if (option != ING)
			show.cp += 1;
	}
	return (show.cp);
}
