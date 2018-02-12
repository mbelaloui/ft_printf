/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 19:02:11 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/10 16:14:06 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		check_flags(char *str, t_format *format)
{
	int			pt;
	pt = 0;
	while (str[pt] && !ft_is_conversion_type(str[pt]))
	{

		//		ft_putchar(str[pt]);
		if (str[pt] == '#')
			format->flags->hashtag = 1;
		else if (str[pt] == '+')
			format->flags->plus = 1;
		else if (str[pt] == '-')
			format->flags->dash = 1;
		else if (str[pt] == ' ')
			format->flags->space = 1;
		else if (str[pt] == '0')
			format->flags->zero = 1;
		else if (str[pt] == '\'')
			format->flags->apo = 1;
		//else
		//	pt = ft_strlen(str) - 1;
		
		pt++;
	}

//		ft_put_flags(format->flags);

}

static void		get_info(char *str, t_format *format)//malloc
{
	int			pt;
	int			ref;

//	ft_putstr(str);
	pt = 0;
	while (str[pt] && str[pt] != '.' && !(ft_isdigit(str[pt]) && str[pt] != '0')
			&& str[pt] != '*' && !ft_is_conversion_type(str[pt]))
		pt++;
	format->min_length = (str[pt] == '*') ? -2 : ft_atoi(str + pt);
	while (str[pt] && str[pt] != '.'&& !ft_is_conversion_type(str[pt]))
		pt++;
	if (str[pt] == '.' && !ft_is_conversion_type(str[pt]))
	{
		pt++;
		format->precision = (str[pt] == '*') ? -2 : ft_atoi(str + pt);
	}
	while (str[pt] && !ft_is_conversion_type(str[pt]))
		pt++;
	--pt;
	ref = pt;
	while (pt > 0 && ft_isalpha(str[pt]) && !ft_is_conversion_type(str[pt]))
		pt--;
	if (!ft_isalpha(str[pt]) && !ft_is_conversion_type(str[pt]))
		pt++;
	format->prefix = (ref == pt) ? "!" : ft_strcut(str, pt, ref);
	format->type = str[ref + 1];
}

static void		switch_type(t_format *format, va_list *ap)
{
	if (format->type == 's')
		ft_convert_string(format, ap);
	if (format->type == 'd' || format->type == 'i')
		ft_convert_decimal(format, ap);
	if (format->type == 'c')
		ft_convert_char(format, ap);
}

int				ft_put_param(va_list *ap, char *str, t_format *format)
{
	int			pt_end_of_format;

	if (str[1] && str[1] == '%') // mettre un put_buf et tester ce bout de code 
	{
		write(1, "%", 1);
		return (2);
	}
	pt_end_of_format = ft_get_parssing(str); // enlever ca en testant directement avec str

//ft_putstr(str);
	check_flags(str + 1, format);
	get_info(str, format);

//	ft_put_format(format);

	switch_type(format, ap);
	return (pt_end_of_format + 1);
}