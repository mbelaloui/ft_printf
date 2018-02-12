/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:53:10 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/29 14:46:57 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t pt_end_dest;
	size_t nbr_b_free;

	pt_end_dest = ft_strlen(dest);
	nbr_b_free = n - pt_end_dest;
	if ((int)nbr_b_free <= 0)
		return (n + ft_strlen(src));
	dest = ft_strncat((dest + pt_end_dest), src, nbr_b_free - 1);
	return (pt_end_dest + ft_strlen(src));
}
