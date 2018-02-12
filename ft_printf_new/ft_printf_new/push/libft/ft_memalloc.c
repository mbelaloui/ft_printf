/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memlloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 05:06:16 by mbelalou          #+#    #+#             */
/*   Updated: 2018/01/03 19:30:58 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*result;

	if (size > 2147483647)
		return (NULL);
	result = (void *)malloc((size + 1) * sizeof(*result));
	if (!result)
		return (NULL);
	ft_bzero(result, size + 1);
	return ((void *)result);
}
