/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:52:56 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/16 02:24:27 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	pt;

	pt = 0;
	while (src[pt])
	{
		dst[pt] = src[pt];
		pt++;
	}
	dst[pt] = '\0';
	return ((char *)dst);
}
