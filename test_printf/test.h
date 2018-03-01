/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/03 12:17:10 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/27 14:45:49 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H
# include "../push/ft_printf.h"
# include <stdio.h>

void	ft_test_string(const char *str);
void	ft_test_char(const char *c);
void	ft_test_decimal(const int decimal);
void	ft_test_octal(const int decimal);
void	ft_test_int(const int decimal);

int		ft_test_String_simple_flag(const char *str, const char *format, int *num_test);
int		ft_test_Char_simple_flag(const char *str, const char *format, int *num_test);
int		ft_test_Decimal_simple_flag(const int decimal, const char *format, int *num_test);

int		ft_test_String_with_minlen(const char *str, const char *format, int min_length, int *num_test);
int		ft_test_Char_with_minlen(const char *str, const char *format, int min_length, int *num_test);
int		ft_test_Decimal_with_minlen(const int decimal, const char *format, int min_length, int *num_test);

int		ft_test_String_with_precision(const char *str, const char *format, int min_length, int *num_test);
int		ft_test_Char_with_precision(const char *str, const char *format, int min_length, int *num_test);
int		ft_test_Decimal_with_precision(const int decimal, const char *format, int min_length, int *num_test);



int		ft_test_String_with_minlen_precision(const char *str, const char *format, int min_length, int precision, int *num_test);
int		ft_test_Char_with_minlen_precision(const char *str, const char *format,	int min_length, int precision, int *num_test);
int		ft_test_Decimal_with_minlen_precision(const int decimal, const char *format, int min_length, int precision, int *num_test);




int		ft_put_result(const int res1, const int res2);
void	ft_put_summary(int test_ok, int total_test);
void	ft_print_nu_format(int *num_test, const char *format);
void	ft_print_simple_title(const char *str, const char *format, int *num_test);
void	ft_print_minlen_title(const char *str, const char *format, int min_length, int *num_test);
void	ft_print_precision_title(const char *str, const char *format,
		int precision, int *num_test);
void	ft_print_minlen_precision_title(const char *str, const char *format,
		int min_length, int precision, int *num_test);

#endif



















