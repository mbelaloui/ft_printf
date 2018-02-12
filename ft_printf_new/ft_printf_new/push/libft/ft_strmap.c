/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:22:21 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/27 01:31:40 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		len;
	int		pt;
	char	*resultat;

	if (!s || !*f)
		return (NULL);
	len = ft_strlen(s);
	resultat = (char *)ft_strnew(len);
	if (resultat == NULL)
		return (NULL);
	pt = 0;
	while (pt < len)
	{
		resultat[pt] = f(s[pt]);
		pt++;
	}
	resultat[pt] = '\0';
	return ((char *)resultat);
}
