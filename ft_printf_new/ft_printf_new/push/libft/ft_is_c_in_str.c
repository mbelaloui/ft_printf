/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_c_in_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 09:25:30 by mbelalou          #+#    #+#             */
/*   Updated: 2018/01/07 10:40:47 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_c_in_str(char c, char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}
