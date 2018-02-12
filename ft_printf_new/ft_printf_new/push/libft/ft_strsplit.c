/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:45:13 by mbelalou          #+#    #+#             */
/*   Updated: 2018/01/03 16:54:22 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *str, char c)
{
	size_t	dim;
	char	**resultat;
	int		id_mot;

	if (str == NULL || !c)
		return (NULL);
	dim = ft_comptword(str, c);
	if (!(resultat = (char **)malloc(sizeof(resultat) * (dim + 1))))
		return (NULL);
	id_mot = 0;
	while (id_mot < (int)dim)
	{
		resultat[id_mot] = ft_getword(str, id_mot, c);
		id_mot++;
	}
	resultat[id_mot] = NULL;
	return (resultat);
}
