/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 03:41:03 by mbelalou          #+#    #+#             */
/*   Updated: 2018/01/03 16:45:33 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcut(const char *src, const size_t d, const size_t f)
{
	char	*dest;
	size_t	pt;

	if (src == NULL || d > f)
		return (NULL);
	dest = ft_strnew(f - d);
	if (dest == NULL)
		return (NULL);
	pt = 0;
	while (pt < (f - d))
	{
		dest[pt] = src[d + pt];
		pt++;
	}
	return (dest);
}
