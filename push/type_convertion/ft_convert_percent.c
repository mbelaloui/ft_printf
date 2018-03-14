/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_percent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 16:29:41 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/01 16:35:09 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_convert_percent(t_format *format, va_list *ap)
{
	//get the precision 
	//get the min_length
	
	
	while (format->min_length-- >0)
		ft_put_buf(' ', PUT_CHAR);
	ft_put_buf('%', PUT_CHAR);
	//put space\
	ft_
}
