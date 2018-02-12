/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 12:05:34 by mbelalou          #+#    #+#             */
/*   Updated: 2018/01/19 12:38:45 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		existe(char c, char *base, int str_base)
{
	int pt;

	pt = -1;
	while (++pt < str_base)
	{
		if (base[pt] == c)
			return (1);
	}
	return (0);
}

static	int		getvaleur(char c, char *base)
{
	int val;

	val = 0;
	while (base[val] != c)
		++val;
	return (val);
}

int				ft_atoi_base(const char *str, int str_base)
{
	int		pt;
	int		nbr_ret;
	short	signe;
	char	*elem_base;
	char	*temp;

	if ((str_base < 1 || str_base > 16) && (str == NULL))
		return (0);
	elem_base = "0123456789abcdef";
	nbr_ret = 0;
	signe = (*str == '-') ? -1 : 1;
	pt = (*str == '-' || *str == '+') ? 0 : -1;
	temp = (char *)str;
	while (temp[++pt])
	{
		if (ft_isupper(str[pt]))
			temp[pt] = temp[pt] + ('a' - 'A');
		if (!existe(temp[pt], elem_base, str_base))
			return (signe * nbr_ret);
		nbr_ret = (nbr_ret * str_base) + getvaleur(temp[pt], elem_base);
	}
	return (nbr_ret * signe);
}
