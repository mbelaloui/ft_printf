/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comptmot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:48:33 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/01 19:39:37 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_comptword(const char *str, const char c)
{
	size_t	i;
	size_t	nbrmot;

	nbrmot = 0;
	if (str == NULL)
		return (nbrmot);
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			nbrmot++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (nbrmot);
}
