/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:12:19 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/29 14:47:29 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	pt;
	int		max_cp;

	pt = ft_strlen(s1);
	max_cp = ft_min((int)n, (int)ft_strlen(s2));
	ft_memcpy((s1 + pt), s2, max_cp);
	s1[pt + max_cp] = '\0';
	return ((char *)s1);
}
