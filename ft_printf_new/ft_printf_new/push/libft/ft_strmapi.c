/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 13:00:41 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/27 01:52:21 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		len;
	int		pt;
	char	*resultat;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	resultat = (char *)ft_strnew(len);
	if (resultat == NULL)
		return (NULL);
	pt = 0;
	while (pt < len)
	{
		resultat[pt] = f((unsigned int)pt, s[pt]);
		pt++;
	}
	resultat[pt] = '\0';
	return ((char *)resultat);
}
