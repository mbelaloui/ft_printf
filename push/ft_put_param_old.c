/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 19:02:11 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/20 18:50:42 by mbelalou         ###   ########.fr       */
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
			format->flags.hashtag = 1;
		else if (str[pt] == '+')
			format->flags.plus = 1;
		else if (str[pt] == '-')
			format->flags.dash = 1;
		else if (str[pt] == ' ')
			format->flags.space = 1;
		else if (str[pt] == '0')
			format->flags.zero = 1;
		else if (str[pt] == '\'')
			format->flags.apo = 1;
		//else
		//	pt = ft_strlen(str) - 1;
		
		pt++;
	}

//		ft_put_flags(format->flags);

}

static void		get_convertion(char *str, t_convertion *convertion)
{

	int pt;

	pt = 0;
	while (str[pt] && !ft_is_conversion_type(str[pt]))
	{
		if (str[pt] == 'l')
		{
			convertion->l = 1;
			convertion->nbr_l++;
		}
		if (str[pt] == 'h')
		{
			convertion->h = 1;
			convertion->nbr_h++;
		}
		if (str[pt] == 'j')
			convertion->j = 1;
		if (str[pt] == 'z')
			convertion->z = 1;
		pt++;
	}

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
//	ft_putstr("\n********************\n");
	format->min_length = (str[pt] == '*') ?
		-2 : ft_atoi(str + pt);
	if (ft_isdigit(str[pt]))
		format->is_there_min_length = 1;
//		ft_putstr(str+pt);
//	ft_putstr("\n********************\n");
	while (str[pt] && str[pt] != '.'&& !ft_is_conversion_type(str[pt]))
		pt++;
	if (str[pt] == '.' && !ft_is_conversion_type(str[pt]))
	{
		pt++;
		format->precision = (str[pt] == '*' || !ft_isdigit(str[pt])) ?
			-2 : ft_atoi(str + pt);
		if (ft_isdigit(str[pt]))
			format->is_there_precision = 1;
	}


	get_convertion(str, &(format->convertion));

//	ft_put_format(&format->convertion);
	
	while (str[pt] && !ft_is_conversion_type(str[pt]))
		pt++;
/*	--pt;
	ref = pt;
	while (pt > 0 && ft_isalpha(str[pt]) && !ft_is_conversion_type(str[pt]))
		pt--;
ft_putstr((str + ref));
	if (!ft_isalpha(str[pt]) && !ft_is_conversion_type(str[pt]))
		pt++;*/
//ft_putstr(str);}
//	format->prefix = (ref < pt) ? "!" : ft_strcut(str,pt,  ref +1);
	format->type = str[pt];
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
/*
void			set_len(t_format **format)
{
	if (format->type == 's')
		format->len = ft_strlen (format);
}
*/
int				ft_put_param(va_list *ap, char *str, t_format *format)
{
	int			pt_end_of_format;

	if (str[1] && str[1] == '%') // mettre un put_buf et tester ce bout de code 
	{
		ft_put_buf('%', PUT_CHAR);
		return (2);
	}
	pt_end_of_format = ft_get_parssing(str); // enlever ca en testant directement avec str

//ft_putstr(str);
	check_flags(str + 1, format);
	get_info(str, format);

//	set_len(&format);

//	ft_putstr("\n");
//	ft_put_format(format);

	switch_type(format, ap);
	return (pt_end_of_format + 1);
}
