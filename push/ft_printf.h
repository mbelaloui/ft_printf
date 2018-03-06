/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 13:11:55 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/06 14:23:58 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../../../../libft/libft.h"
# include <stdarg.h>

# include "color/ft_color.h"

#define		SIZE_BUF	80
#define		EOL			0
#define		PUT_CHAR	1
#define		RESET		-1
#define		ING			2

#define		SIZE_TAB_CONV 128

typedef struct	s_flags
{
	int			dash : 1;
	int			plus : 1;
	int			hashtag :1;
	int			zero : 1;
	int			space :1;
	int			apo : 1;
}				t_flags;

typedef struct	s_conversion
{
	int			h : 1;
	char		nbr_h;
	int			l : 1;
	char		nbr_l;
	int			j : 1;
	int			z : 1;
}				t_convert;

typedef struct	s_fotmat
{
	size_t		len_temp;
	t_flags		flags;
	int			min_length;
	int			is_there_min_length : 1;
	int			precision;
	int			is_there_precision : 1;
	t_convert	convertion;
	char		type;
}				t_format;

int				ft_printf(const char *format, ...);
int				ft_put_param(va_list *ap, char *str, t_format *format);

void			ft_switch_type(t_format *format, va_list *ap);

int				ft_is_conversion_type(char c);
int				ft_get_parssing_format(char *str, t_format *format);

void			ft_convert_string(t_format *format, va_list *ap);
void			ft_convert_char(t_format *format, va_list *ap);
void			ft_convert_decimal(t_format *format, va_list *ap);
void			ft_convert_octal(t_format *format, va_list *ap);
void			ft_convert_hexa(t_format *format, va_list *ap);
void			ft_convert_unsigned(t_format *format, va_list *ap);

int				is_valid(t_format *format);
void			ft_put_flags(t_flags *flags);
void			ft_put_format(t_format *format);
void			ft_put_convertion(t_convert *convertion);

int				ft_put_buf(const char c, int option);

void			ft_format_init(t_format *format);
void			ft_put_nbr(long nbr, t_format *format, int nbr_0, int size_ret);

long			ft_get_convertion_d(int data, t_convert convert);

void			ft_convert_percent(t_format *format, va_list *ap);

#endif
