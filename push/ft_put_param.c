/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 19:02:11 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/27 11:12:37 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		check_flags(char *str, t_format *format)
{
	int pt;

	pt = 0;
	while (!ft_is_conversion_type(str[pt]))
	{
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
		pt++;
	}
}

static void		get_convertion(char *str, t_convert *convertion)
{
	int pt;

	pt = 0;
	while (!ft_is_conversion_type(str[pt]))
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
/* extraire la fonction dans un seul fichier et la diviser */
static void		get_info(char *str, t_format *format)
{
	int			pt;
	int			ref;

	pt = 0;
/*******************/
	//min_length
/*******************/
	while (str[pt] != '.' && !(ft_isdigit(str[pt]) && str[pt] != '0')
			&& str[pt] != '*' && !ft_is_conversion_type(str[pt]))
		pt++;
	format->min_length = (str[pt] == '*') ? -2 : ft_atoi(str + pt);
	if(ft_isdigit(str[pt]) || str[pt] == '*')
		format->is_there_min_length = 1;
/*******************/
	//precision
/*******************/
	while (str[pt] != '.'&& !ft_is_conversion_type(str[pt]))
		pt++;
	if (str[pt] == '.' && !ft_is_conversion_type(str[pt]))
	{
		pt++;
		if(ft_isdigit(str[pt]) || str[pt] == '*')
		{	format->precision = (str[pt] == '*') ? -2 : ft_atoi(str + pt);
			format->is_there_precision = 1;
		}
	//	else
	//		format->precision = 1;
	}
/*	ft_putstr("precision");
	ft_putnbr(format->precision);
	ft_putstr("\n");*/
/*******************/
	//modif_length
/*******************/
	get_convertion(str, &(format->convertion));
/*******************/
	//conversion_type
/*******************/
	while (!ft_is_conversion_type(str[pt]))
		pt++;
	format->type = str[pt];
}
/**		utiliser les pointeurs sur fonctions	
 *	"sSpdDioOuUxXcC"
 **/
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

	if (str[1] && str[1] == '%') 
	{
		ft_put_buf('%', PUT_CHAR);
		return (2);
	}
	if ((pt_end_of_format = ft_get_parssing(str)) == -1)
	{
		ft_put_buf('%', PUT_CHAR);
		return (1);
	}
	check_flags(str + 1, format);
	get_info(str, format);

//	ft_put_format(format);

	switch_type(format, ap);
	return (pt_end_of_format + 1);
}
