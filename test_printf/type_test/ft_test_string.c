/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 16:31:13 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/24 17:43:57 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

	int ret1, ret2;

void	ft_test_string(const char *str)
{
	int	succeed = 0;
	int	accuracy = 5;
	int	max_lenght = ft_strlen(str) + accuracy;
	int	min_length = 0 , precision = max_lenght, num_test = 0;

	char *str_simple						= "%s";
	char *str_with_dash						= "%-s";
	char *str_with_minlen					= "%*s";
	char *str_with_precision				= "%.*s";
	char *str_with_minlen_precision			= "%*.*s";
	char *str_with_dash_minlen_precision	= "%-*.*s";

		ft_putstr(GREEN);
	ft_putstr("------------------------- *char test -------------------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

		if (ft_test_String_simple_flag(str, str_simple, &num_test))
			succeed++;

		ft_putstr(GREEN);
	ft_putstr("------------------ *char with >\"-\"< ---------------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

		if (ft_test_String_simple_flag(str, str_with_dash, &num_test))
			succeed++;


/**************************************/
	ft_putstr("-------- *char with \"min_len\"  --------\n");
		ft_putstr(WHITE);
	ft_putstr("\t min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\"\n");
	ft_temporize(10);

	min_length = 0;
	while (min_length < max_lenght)
	{
		if (ft_test_String_with_minlen(str, str_with_minlen
						,min_length, &num_test))
				succeed++;
		if (min_length < max_lenght)
		{
				ft_putstr(GREEN);
			ft_putstr("\n\t\t------------------------------------\n");
				ft_putstr(WHITE);
		}
		min_length++;
	}

	ft_putstr("-------- *char with \"precision\" --------\n");
		ft_putstr(WHITE);
	ft_putstr("\t precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\"\n");
	ft_temporize(10);

	precision = (max_lenght);
	while (precision >= 0)
	{
		if (ft_test_String_with_precision(str, str_with_precision
					,precision, &num_test))
			succeed++;
		precision--;
		if (min_length < max_lenght)
		{
				ft_putstr(GREEN);
			ft_putstr("\n\t\t------------------------------------\n");
				ft_putstr(WHITE);
		}
	}

/************************************/

		ft_putstr(GREEN);
	ft_putstr("-------- *char with \"min_len\" and \"precision\" --------\n");
		ft_putstr(WHITE);
	ft_putstr("\t min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and\n");
	ft_putstr("\t precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\"\n");
	ft_temporize(10);

	min_length = 0;
	while (min_length < max_lenght)
	{
		precision = (max_lenght);
		while (precision >= 0)
		{
			if (ft_test_String_with_minlen_precision(str, str_with_minlen_precision
						,min_length, precision, &num_test))
				succeed++;
			precision--;
			if (min_length < max_lenght)
			{
					ft_putstr(GREEN);
				ft_putstr("\n\t\t------------------------------------\n");
					ft_putstr(WHITE);
			}
		}
		min_length++;
	}

	ft_putstr(GREEN);
	ft_putstr("-- *char with \"min_len\" and \"precision\" and \"dash\" <min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\">---\n");
		ft_putstr(WHITE);
			ft_temporize(10);

	min_length = 0;
	while (min_length < max_lenght)
	{
		precision = (max_lenght);
		while (precision >= 0)
		{
			if (ft_test_String_with_minlen_precision(str,
						str_with_dash_minlen_precision, min_length, precision,
						&num_test))
				succeed++;
			precision--;
			if (precision != 0)
			{
					ft_putstr(GREEN);
				ft_putstr("\n\t\t------------------------------------\n");
					ft_putstr(WHITE);
			}
		}
		min_length++;
	}

	ft_putstr(GREEN);
	ft_putstr("\t\t-- *char printf don\'t manage ---\n");
		ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_String_simple_flag(str,"%#s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(str,"% s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(str,"%+s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(str,"%hhs", &num_test))
		succeed++;
	if (ft_test_String_simple_flag(str,"%lls", &num_test))
		succeed++;
	if (ft_test_String_simple_flag(str,"%hs" , &num_test))
		succeed++;

	ft_putstr("---------------------- end *char test ----------------------\n");
	ft_put_summary(num_test, succeed);
}


/*
		ft_putstr(GREEN);
	ft_putstr("------------------ *char with \"min_len\" -------------------\n");
		ft_putstr(WHITE);
	ft_putstr("\t min_length between \"0\" and \"");
		ft_putnbr(max_lenght);
	ft_putstr("\"\n");
	ft_temporize(5);

	min_length = 0;
	while (min_length < max_lenght)
	{
		if (ft_test_String_with_minlen(str,str_with_minlen, min_length, &num_test))
			succeed++;
		min_length++;
		if (min_length != max_lenght)
		{
				ft_putstr(GREEN);
			ft_putstr("\n\t\t------------------------------------\n");
				ft_putstr(WHITE);
		}
	}

		ft_putstr(GREEN);
	ft_putstr("---------------- *char with \"precision\" ------------------\n");
		ft_putstr(WHITE);

	ft_putstr("\t precision between \"");
	ft_putnbr(max_lenght);
	ft_putstr("\" and \"0\"");
	ft_temporize(5);

	precision = max_lenght;
	while (precision >= 0)
	{
		if (ft_test_String_with_precision(str, str_with_precision, precision, &num_test))
			succeed++;
		precision--;
		if (precision != 0)
		{
				ft_putstr(GREEN);
			ft_putstr("\n\t\t------------------------------------\n");
				ft_putstr(WHITE);
		}
	}
*/
	
