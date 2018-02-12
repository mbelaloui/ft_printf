/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:58:09 by mbelalou          #+#    #+#             */
/*   Updated: 2018/01/03 19:45:04 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			pt;
	unsigned char	*temp;

	temp = (unsigned char *)str;
	pt = 0;
	while (pt < n)
	{
		temp[pt] = (unsigned char)c;
		pt++;
	}
	return ((void *)str);
}
