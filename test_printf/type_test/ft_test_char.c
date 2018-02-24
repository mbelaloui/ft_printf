/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 16:31:38 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/24 17:41:09 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void		ft_test_char(const char *c)
{
	int nbr_test_ok = 0;

	int		succeed = 0;
	int		accuracy = 2;
	int		max_lenght = ft_strlen(c) + accuracy;
	int		min_length  = 0, precision = max_lenght, num_test = 0, len_char = 1;

/*	if (max_lenght < 0)
		max_lenght = 0;
	if (min_length < 0)
		min_length = 0;
	
*/	char *char_simple							= "%c";
	char *char_with_dash						= "%-c";
	char *char_with_minlen						= "%*c";
	char *char_with_precision					= "%.*c";
	char *char_with_minlen_precision			= "%*.*c";
	char *char_with_dash_minlen_precision		= "%-*.*c";
	char *char_with_plus						= "%+c";
	char *char_with_plus_dash					= "%+-c";
	char *char_with_plus_minlen					= "%+*c";
	char *char_with_plus_precision				= "%+.*c";
	char *char_with_plus_minlen_precision		= "%+*.*c";
	char *char_with_plus_dash_minlen_precision	= "%+-*.*c";

	ft_putstr(GREEN);
	ft_putstr("------------------------- char test -------------------------\n");
	ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Char_simple_flag(c, char_simple, &num_test))
		succeed++;

		ft_putstr(GREEN);
	ft_putstr("------------------ char with >\"-\"< ---------------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Char_simple_flag(c, char_with_dash, &num_test))
		succeed++;

  ft_putstr(GREEN);
	ft_putstr("------------------ char with \"min_len\" -------------------\n");
		ft_putstr(WHITE);
	ft_putstr("\t min_length between \"0\" and \"");
	ft_putnbr(max_lenght);
	ft_putstr("\"\n");
	ft_temporize(5);

	min_length = len_char;
	while (min_length < max_lenght)
	{
		if (ft_test_Char_with_minlen(c, char_with_minlen, min_length, &num_test))
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
	ft_putstr("---------------- char with \"precision\" ------------------\n");
		ft_putstr(WHITE);

	ft_putstr("\t precision between \"");
	ft_putnbr(max_lenght);
	ft_putstr("\" and \"0\"\n");
	ft_temporize(5);

	precision = max_lenght;
	while (precision >= len_char)
	{
		if (ft_test_Char_with_precision(c, char_with_precision, precision, &num_test))
			succeed++;
		precision--;
		if (precision != 0)
		{
			ft_putstr(GREEN);
			ft_putstr("\n\t\t------------------------------------\n");
			ft_putstr(WHITE);
		}
	}

		ft_putstr(GREEN);
	ft_putstr("-------- char with \"min_len\" and \"precision\" --------\n");
		ft_putstr(WHITE);

	ft_putstr("\t min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and\n");
	ft_putstr("\t precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(")\" and \"0\"\n");
	ft_temporize(10);

	min_length = 0;
	while (min_length <= max_lenght)
	{
		precision = (max_lenght);// - min_length);
		while (precision >= 0)
		{
			if (ft_test_Char_with_minlen_precision(c, char_with_minlen_precision
						,min_length, precision, &num_test))
				succeed++;
			precision--;
			if (min_length < max_lenght)//precision != 0)
			{
				ft_putstr(GREEN);
				ft_putstr("\n\t\t------------------------------------\n");
				ft_putstr(WHITE);
			}
		}
		min_length++;
	}

		ft_putstr(GREEN);
	ft_putstr("-- char with \"min_len\" and \"precision\" and \"dash\" <min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\">---\n");
		ft_putstr(WHITE);
	ft_temporize(10);

	min_length = 0;
	while (min_length <= max_lenght)
	{
		precision = (max_lenght);
		while (precision >= 0)
		{
			if (ft_test_Char_with_minlen_precision(c,
						char_with_dash_minlen_precision, min_length, precision,
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
	ft_putstr("--------------------- char with \"+\" --------------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Char_simple_flag(c, char_with_plus, &num_test))
		succeed++;

		ft_putstr(GREEN);
	ft_putstr("-------------- char with >\"-\" and \"+\"<  --------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Char_simple_flag(c, char_with_plus_dash, &num_test))
		succeed++;

		ft_putstr(GREEN);
	ft_putstr("----------- char with \"min_len\" and \"+\" ---------++--\n");
		ft_putstr(WHITE);
	ft_putstr("\t min_length between \"0\" and \"");
	ft_putnbr(max_lenght);
	ft_putstr("\"\n");
	ft_temporize(5);

	min_length = 8;
	while (min_length < max_lenght)
	{
		if (ft_test_Char_with_minlen(c, char_with_plus_minlen, min_length, &num_test))
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
	ft_putstr("------------ char with \"precision\" and \"+\"- ----------\n");
		ft_putstr(WHITE);

	ft_putstr("\t precision between \"");
	ft_putnbr(max_lenght);
	ft_putstr("\" and \"0\"");
	ft_temporize(5);

	precision = max_lenght;
	while (precision >= len_char)
	{
		if (ft_test_Char_with_precision(c, char_with_plus_precision, precision, &num_test))
			succeed++;
		precision--;
		if (precision != 0)
		{
			ft_putstr(GREEN);
			ft_putstr("\n\t\t------------------------------------\n");
			ft_putstr(WHITE);
		}
	}

		ft_putstr(GREEN);
	ft_putstr("-- char  with \"min_len\" and \"precision\"  and \"+\"--\n");
		ft_putstr(WHITE);

	ft_putstr("\t min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and\n");
	ft_putstr("\t precision between \"((lenght + ");
	
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\"\n");
	ft_temporize(10);
	min_length = 0;
	while (min_length <= max_lenght)
	{
		precision = (max_lenght);
		while (precision >= 0)
		{
			if (ft_test_Char_with_minlen_precision(c, char_with_plus_minlen_precision
						,min_length, precision, &num_test))
				succeed++;
			precision--;
			if (min_length < max_lenght)//precision != 0)
			{
				ft_putstr(GREEN);
				ft_putstr("\n\t\t------------------------------------\n");
				ft_putstr(WHITE);
			}
		}
		min_length++;
	}

	ft_putstr(GREEN);
	ft_putstr("-- char with \"+\" and \"min_len\" and \"precision\" and \"dash\" <min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\">---\n");
		ft_putstr(WHITE);
	ft_temporize(10);

	min_length = len_char;
	while (min_length <= max_lenght)
	{
		precision = (max_lenght - min_length);
		while (precision >= 0)
		{
			if (ft_test_Char_with_minlen_precision(c,
						char_with_plus_dash_minlen_precision, min_length, precision,
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

	/*ft_putstr(GREEN);
	ft_putstr("\t\t-- *char printf don\'t manage ---\n");
	ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_String_simple_flag(c,"%+c" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(c,"% s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(c,"%+s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(c,"%hhs", &num_test))
		succeed++;
	if (ft_test_String_simple_flag(c,"%lls", &num_test))
		succeed++;
	if (ft_test_String_simple_flag(c,"%hs" , &num_test))
		succeed++;
*/

	ft_putstr("---------------------- end char test ----------------------\n");
	ft_put_summary(num_test, succeed);//return (nbr_test_ok);
}
