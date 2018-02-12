/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 02:25:46 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/24 10:22:42 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			pt;
	unsigned char	*temp_s;

	temp_s = (unsigned char *)s;
	pt = 0;
	while (pt < n)
	{
		if (temp_s[pt] == (unsigned char)c)
			return (&temp_s[pt]);
		pt++;
	}
	return (NULL);
}
