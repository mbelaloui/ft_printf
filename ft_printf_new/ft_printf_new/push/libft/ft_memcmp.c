/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 02:36:19 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/24 15:50:33 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;
	size_t			pt;

	temp_s1 = (unsigned char *)s1;
	temp_s2 = (unsigned char *)s2;
	pt = 0;
	while (pt < n)
	{
		if (temp_s1[pt] != temp_s2[pt])
			return (temp_s1[pt] - temp_s2[pt]);
		pt++;
	}
	return (0);
}
