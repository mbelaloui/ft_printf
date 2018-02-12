/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_empty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 18:47:50 by mbelalou          #+#    #+#             */
/*   Updated: 2018/01/29 22:13:26 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew_empty(size_t size)
{
	char	*result;

	if (size > 2147483647)
		return (NULL);
	result = (char *)malloc((size + 1) * sizeof(*result));
	if (!result)
		return (NULL);
	ft_memset(result, ' ', size);
	result[size + 1] = '\0';
	return (result);
}
