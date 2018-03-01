/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 19:02:11 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/01 16:37:45 by mbelalou         ###   ########.fr       */
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
		else if (str[pt] == '0' && !ft_isdigit(str[pt - 1]))
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

static void		get_precision(char *str, t_format *format)
{
	int precision;
	int pt;

	pt = 0;
	format->is_there_precision = 1;
	if (ft_isdigit(str[pt]) || str[pt] == '*')
		format->precision = (str[pt] == '*') ? -2 : ft_atoi(str + pt);
	else
		format->precision = 0;
}

static void		get_info(char *str, t_format *format)
{
	int pt;

	pt = 0;
	while (str[pt] && !ft_is_conversion_type(str[pt]))
	{
		if (str[pt] == '0')
			pt++;
		else if (str[pt] == '.')
		{
			get_precision(str + (++pt), format);
			while (ft_isdigit(str[pt]) || str[pt] == '*')
				pt++;
		}
		else if (str[pt - 1] != '.' && (ft_isdigit(str[pt]) || str[pt] == '*'))
		{
			format->min_length = (str[pt] == '*') ? -2 : ft_atoi(str + pt);
			format->is_there_min_length = 1;
			pt++;
			while (ft_isdigit(str[pt]) || str[pt] == '*')
				pt++;
		}
		else
			pt++;
	}
}

int				ft_put_param(va_list *ap, char *str, t_format *format)
{
	int			pt_end_of_format;

	if (str[1] && str[1] == '%')// posibiliter d'ajouter un copmteur pour ne pas afficher les espases qui sont derniere le % jusqua la fin de ligne ou un caractere pas signifiant
	{
		ft_put_buf('%', PUT_CHAR);
		return (2);
	}
	if ((pt_end_of_format = ft_get_parssing_format(str, format)) == -1)
	{
	//	ft_put_buf('%', PUT_CHAR);
		return (1);
	}
	check_flags(str + 1, format);
	get_info(str, format);
	get_convertion(str, &(format->convertion));

//	ft_put_format(format);
	ft_switch_type(format, ap);
	return (pt_end_of_format + 1);
}
