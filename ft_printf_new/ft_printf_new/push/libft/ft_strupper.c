/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 12:40:50 by mbelalou          #+#    #+#             */
/*   Updated: 2018/01/18 12:46:32 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strupper(const char *str)
{
	char	*ret;
	int		pt;

	if (str == NULL)
		return (NULL);
	ret = (char *)str;
	pt = 0;
	while (ret[pt])
	{
		if (ft_islower(ret[pt]))
			ret[pt] = ret[pt] - ('a' - 'A');
		pt++;
	}
	return (ret);
}
