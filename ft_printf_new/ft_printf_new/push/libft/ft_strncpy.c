/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:31:58 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/16 00:37:06 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t pt;

	pt = 0;
	while (src[pt] && (pt < n))
	{
		dst[pt] = src[pt];
		pt++;
	}
	while (pt < n)
		dst[pt++] = '\0';
	return ((char *)dst);
}
