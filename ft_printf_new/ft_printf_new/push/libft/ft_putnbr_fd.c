/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:32:00 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/24 13:39:49 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ecrire_nb_fd(int nb, int fd)
{
	char	r;
	int		q;

	q = nb / 10;
	r = (nb % 10) + 48;
	if (q > 0)
	{
		ecrire_nb_fd(q, fd);
		ft_putchar_fd(r, fd);
	}
	else
		ft_putchar_fd(r, fd);
}

void			ft_putnbr_fd(int nb, int fd)
{
	if (nb >= 0)
		ecrire_nb_fd(nb, fd);
	else
	{
		ft_putchar_fd('-', fd);
		if (nb == (-2147483648))
			ft_putstr_fd("2147483648", fd);
		else
		{
			nb = -nb;
			ecrire_nb_fd(nb, fd);
		}
	}
}
