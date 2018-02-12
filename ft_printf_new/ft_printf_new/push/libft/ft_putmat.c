/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matligneput.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 13:50:42 by mbelalou          #+#    #+#             */
/*   Updated: 2018/01/03 15:59:01 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmat(char **mat)
{
	if (mat == NULL)
	{
		ft_putendl(NULL);
		return ;
	}
	while (*mat)
		ft_putendl(*mat++);
}
