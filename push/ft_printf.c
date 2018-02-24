/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 16:38:35 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/24 17:54:32 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	run(char *str, va_list *ap)
{
	int			pt;
	t_format	format;

	ft_format_init(&format);
	while (*str)
	{
		while (*str && *str != '%')
		{
			ft_put_buf(*str, PUT_CHAR);
			str++;
		}
		if (*str == '%')
		{
			pt = ft_put_param(ap, str, &format);
			str = str + pt;
		}
	}
}

int			ft_printf(const char *input, ...)
{
	char	*str_format;
	int		len;
	va_list	ap;

	va_start(ap, input);
	str_format = (char *)input;
	if (!str_format)
	{
		write(1, "NULL", 4);
		return (-1);
	}
	run(str_format, &ap);
	len = ft_put_buf(' ', EOL);
	ft_put_buf(' ', RESET);
	va_end(ap);
//	ft_temporize(1);
	return (len);
}
