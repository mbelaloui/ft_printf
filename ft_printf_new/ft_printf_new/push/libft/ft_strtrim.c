/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 03:05:00 by mbelalou          #+#    #+#             */
/*   Updated: 2018/01/03 17:02:12 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*empty(void)
{
	char *result;

	result = (char *)ft_strnew(0);
	if (result == NULL)
		return (NULL);
	return (result);
}

char			*ft_strtrim(const char *s)
{
	size_t	debut;
	size_t	fin;

	if (!s)
		return (NULL);
	if (ft_isempty(s))
		return (empty());
	debut = 0;
	while (s[debut] && (ft_isblank(s[debut]) || s[debut] == '\n'))
		debut++;
	fin = (ft_strlen(s) - 1);
	while (s[fin] && (ft_isblank(s[fin]) || s[fin] == '\n') && (debut < fin))
		fin--;
	return (ft_strcut(s, debut, fin + 1));
}
