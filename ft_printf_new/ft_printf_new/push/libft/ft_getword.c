/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getmot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 19:09:27 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/01 20:04:36 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getword(const char *str, const int idword, const char c)
{
	char	*result;
	size_t	pt_w;
	size_t	lenword;

	if (!str || idword < 0)
		return (NULL);
	if ((int)(pt_w = ft_getfirstindexword(str, idword, c)) < 0)
		return (NULL);
	lenword = ft_getlenword(str, pt_w, c);
	result = ft_strcut(str, pt_w, (pt_w + lenword));
	result[lenword++] = '\0';
	return (result);
}
