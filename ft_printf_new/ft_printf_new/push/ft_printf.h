/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 13:11:55 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/10 14:56:16 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

#define		SIZE_BUF	80
#define		EOL			0
#define		PUT_CHAR	1
#define		RESET		-1
#define		ING			2

typedef struct	s_flags
{
	int			dash : 1;
	int			plus : 1;
	int			hashtag :1;
	int			zero : 1;
	int			space :1;
	int			apo : 1;
}				t_flags;

typedef struct	s_fotmat
{
	int			min_length;
	int			precision;
	char		*prefix;
	char		type;
	int			len_temp;
	t_flags		*flags;
}				t_format;

typedef struct	s_show
{
	char		buf[SIZE_BUF + 1];
	int			pt;
	int			cp;
}				t_show;

int				ft_printf(const char *format, ...);
int				ft_put_param(va_list *ap, char *str, t_format *format);

int				ft_is_conversion_type(char c);
int				ft_get_parssing(char *str);

void			ft_convert_string(t_format *format, va_list *ap);
void			ft_convert_char(t_format *format, va_list *ap);
void			ft_convert_decimal(t_format *format, va_list *ap);

int				is_valid(t_format *format);
void			ft_put_flags(t_flags *flags);
void			ft_put_format(t_format *format);

int				ft_put_buf(const char c, int option);

t_format		*ft_format_init(void);

void			ft_put_nbr(long nbr, t_format *format);

#endif
