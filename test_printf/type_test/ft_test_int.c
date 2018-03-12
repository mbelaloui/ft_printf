/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_decimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 16:31:38 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/24 17:45:19 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void		ft_test_int(int decimal)
{
	int nbr_test_ok = 0;

	int		succeed = 0;
	int		accuracy = 20;
	int		max_lenght = ft_nbrlen(decimal) + accuracy;
	int		min_length , precision, num_test = 0, len_decimal = ft_nbrlen(decimal) -2;

	if (max_lenght < 0)
		max_lenght = 0;
	if (min_length < 0)
		min_length = 0;
	
	char *decimal_simple							= "%#i";
	char *decimal_with_dash							= "%#-i";
	char *decimal_with_minlen						= "%#*i";
	char *decimal_with_precision					= "%#.*i";
	char *decimal_with_minlen_precision				= "%#*.*i";
	char *decimal_with_dash_minlen_precision		= "%#-*.*i";
	char *decimal_with_plus							= "%#+i";
	char *decimal_with_plus_dash					= "%#+-i";
	char *decimal_with_plus_minlen					= "%#+*i";
	char *decimal_with_plus_precision				= "%#+.*i";
	char *decimal_with_plus_minlen_precision		= "%#+*.*i";
	char *decimal_with_plus_dash_minlen_precision	= "%#+-*.*i";



	char *decimal_simple_space							= "%# i";
	char *decimal_with_dash_space						= "%# -i";
	char *decimal_with_minlen_space						= "%# *i";
	char *decimal_with_precision_space					= "%# .*i";
	char *decimal_with_minlen_precision_space			= "%# *.*i";
	char *decimal_with_dash_minlen_precision_space		= "%#- *.*i";
	char *decimal_with_plus_space						= "%#+ i";
	char *decimal_with_plus_dash_space					= "%#+ -i";
	char *decimal_with_plus_minlen_space				= "%#+ *i";
	char *decimal_with_plus_precision_space				= "%#+ .*i";
	char *decimal_with_plus_minlen_precision_space		= "%#+ *.*i";
	char *decimal_with_plus_dash_minlen_precision_space	= "%#+- *.*i";

	char *decimal_simple_space_zero								= "%#0 i";
	char *decimal_with_dash_space_zero							= "%#0 -i";
	char *decimal_with_minlen_space_zero						= "%#0 *i";
	char *decimal_with_precision_space_zero						= "%#0 .*i";
	char *decimal_with_minlen_precision_space_zero				= "%#0 *.*i";
	char *decimal_with_dash_minlen_precision_space_zero			= "%#-0 *.*i";
	char *decimal_with_plus_space_zero							= "%#+0 i";
	char *decimal_with_plus_dash_space_zero						= "%#+0 -i";
	char *decimal_with_plus_minlen_space_zero					= "%#+0 *i";
	char *decimal_with_plus_precision_space_zero				= "%#+0 .*i";
	char *decimal_with_plus_minlen_precision_space_zero			= "%#+0 *.*i";
	char *decimal_with_plus_dash_minlen_precision_space_zero	= "%#+-0 *.*i";

	char *decimal_simple_space_zero_apo								= "%'#0 hhi";
	char *decimal_with_dash_space_zero_apo							= "%'#0 -hhi";
	char *decimal_with_minlen_space_zero_apo						= "%'#0 *hhi";
	char *decimal_with_precision_space_zero_apo						= "%'#0 .*hhi";
	char *decimal_with_minlen_precision_space_zero_apo				= "%'#0 *.*hhi";
	char *decimal_with_dash_minlen_precision_space_zero_apo			= "%'#-0 *.*hhi";
	char *decimal_with_plus_space_zero_apo							= "%'#+0 hhi";
	char *decimal_with_plus_dash_space_zero_apo						= "%'#+0 -hhi";
	char *decimal_with_plus_minlen_space_zero_apo					= "%'#+0 *hhi";
	char *decimal_with_plus_precision_space_zero_apo				= "%'#+0 .*hhi";
	char *decimal_with_plus_minlen_precision_space_zero_apo			= "%'#+0 *.*hhi";
	char *decimal_with_plus_dash_minlen_precision_space_zero_apo	= "%'#+-0 *.*hhi";

	ft_putstr(GREEN);
	ft_putstr("------------------------- decimal test -------------------------\n");
	ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, decimal_simple, &num_test))
		succeed++;

		ft_putstr(GREEN);
	ft_putstr("------------------ decimal with >\"-\"< ---------------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, decimal_with_dash, &num_test))
		succeed++;

  ft_putstr(GREEN);
	ft_putstr("------------------ decimal with \"min_len\" -------------------\n");
		ft_putstr(WHITE);
	ft_putstr("\t min_length between \"0\" and \"");
	ft_putnbr(max_lenght);
	ft_putstr("\"\n");
	ft_temporize(5);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		if (ft_test_Decimal_with_minlen(decimal, decimal_with_minlen, min_length, &num_test))
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
	ft_putstr("---------------- decimal with \"precision\" ------------------\n");
		ft_putstr(WHITE);

	ft_putstr("\t precision between \"");
	ft_putnbr(max_lenght);
	ft_putstr("\" and \"0\"\n");
	ft_temporize(5);

	precision = max_lenght;
	while (precision >= len_decimal)
	{
		if (ft_test_Decimal_with_precision(decimal, decimal_with_precision, precision, &num_test))
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
	ft_putstr("-------- decimal with \"min_len\" and \"precision\" --------\n");
		ft_putstr(WHITE);

	ft_putstr("\t min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and\n");
	ft_putstr("\t precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(")\" and \"0\"\n");
	ft_temporize(10);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		precision = (max_lenght);// - min_length);
		while (precision >= len_decimal)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal, decimal_with_minlen_precision
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
	ft_putstr("-- decimal with \"min_len\" and \"precision\" and \"dash\" <min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\">---\n");
		ft_putstr(WHITE);
	ft_temporize(10);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		precision = (max_lenght - min_length);
		while (precision >= len_decimal)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal,
						decimal_with_dash_minlen_precision, min_length, precision,
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
	ft_putstr("--------------------- decimal with \"+\" --------------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, decimal_with_plus, &num_test))
		succeed++;

		ft_putstr(GREEN);
	ft_putstr("-------------- decimal with >\"-\" and \"+\"<  --------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, decimal_with_plus_dash, &num_test))
		succeed++;

		ft_putstr(GREEN);
	ft_putstr("----------- decimal with \"min_len\" and \"+\" ---------++--\n");
		ft_putstr(WHITE);
	ft_putstr("\t min_length between \"0\" and \"");
	ft_putnbr(max_lenght);
	ft_putstr("\"\n");
	ft_temporize(5);

	min_length = 8;
	while (min_length < max_lenght)
	{
		if (ft_test_Decimal_with_minlen(decimal, decimal_with_plus_minlen, min_length, &num_test))
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
	ft_putstr("------------ decimal with \"precision\" and \"+\"- ----------\n");
		ft_putstr(WHITE);

	ft_putstr("\t precision between \"");
	ft_putnbr(max_lenght);
	ft_putstr("\" and \"0\"");
	ft_temporize(5);

	precision = max_lenght;
	while (precision >= len_decimal)
	{
		if (ft_test_Decimal_with_precision(decimal, decimal_with_plus_precision, precision, &num_test))
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
	ft_putstr("-- decimal  with \"min_len\" and \"precision\" i and \"+\"--\n");
		ft_putstr(WHITE);

	ft_putstr("\t min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and\n");
	ft_putstr("\t precision between \"((lenght + ");
	
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\"\n");
	ft_temporize(10);
	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		precision = (max_lenght - min_length);
		while (precision >= len_decimal)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal, decimal_with_plus_minlen_precision
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
	ft_putstr("-- decimal with \"+\" and \"min_len\" and \"precision\" and \"dash\" <min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\">---\n");
		ft_putstr(WHITE);
	ft_temporize(10);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		precision = (max_lenght - min_length);
		while (precision >= len_decimal)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal,
						decimal_with_plus_dash_minlen_precision, min_length, precision,
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
/*
	ft_putstr(GREEN);
	ft_putstr("\t\t-- *char printf don\'t manage ---\n");
	ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_String_simple_flag(decimal,"%#s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"% s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"%+s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"%hhs", &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"%lls", &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"%hs" , &num_test))
		succeed++;
*/


	ft_putstr(GREEN);
	ft_putstr("------------------------- decimal test -------------------------\n");
	ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, decimal_simple_space, &num_test))
		succeed++;

		ft_putstr(GREEN);
	ft_putstr("------------------ decimal with >\"-\"< ---------------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, decimal_with_dash_space, &num_test))
		succeed++;

  ft_putstr(GREEN);
	ft_putstr("------------------ decimal with \"min_len\" -------------------\n");
		ft_putstr(WHITE);
	ft_putstr("\t min_length between \"0\" and \"");
	ft_putnbr(max_lenght);
	ft_putstr("\"\n");
	ft_temporize(5);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		if (ft_test_Decimal_with_minlen(decimal, decimal_with_minlen_space, min_length, &num_test))
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
	ft_putstr("---------------- decimal with \"precision\" ------------------\n");
		ft_putstr(WHITE);

	ft_putstr("\t precision between \"");
	ft_putnbr(max_lenght);
	ft_putstr("\" and \"0\"\n");
	ft_temporize(5);

	precision = max_lenght;
	while (precision >= len_decimal)
	{
		if (ft_test_Decimal_with_precision(decimal, decimal_with_precision_space, precision, &num_test))
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
	ft_putstr("-------- decimal with \"min_len\" and \"precision\" --------\n");
		ft_putstr(WHITE);

	ft_putstr("\t min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and\n");
	ft_putstr("\t precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(")\" and \"0\"\n");
	ft_temporize(10);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		precision = (max_lenght);// - min_length);
		while (precision >= len_decimal)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal, decimal_with_minlen_precision_space
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
	ft_putstr("-- decimal with \"min_len\" and \"precision\" and \"dash\" <min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\">---\n");
		ft_putstr(WHITE);
	ft_temporize(10);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		precision = (max_lenght - min_length);
		while (precision >= len_decimal)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal,
						decimal_with_dash_minlen_precision_space, min_length, precision,
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
	ft_putstr("--------------------- decimal with \"+\" --------------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, decimal_with_plus_space, &num_test))
		succeed++;

		ft_putstr(GREEN);
	ft_putstr("-------------- decimal with >\"-\" and \"+\"<  --------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, decimal_with_plus_dash_space, &num_test))
		succeed++;

		ft_putstr(GREEN);
	ft_putstr("----------- decimal with \"min_len\" and \"+\" ---------++--\n");
		ft_putstr(WHITE);
	ft_putstr("\t min_length between \"0\" and \"");
	ft_putnbr(max_lenght);
	ft_putstr("\"\n");
	ft_temporize(5);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		if (ft_test_Decimal_with_minlen(decimal, decimal_with_plus_minlen_space, min_length, &num_test))
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
	ft_putstr("------------ decimal with \"precision\" and \"+\"- ----------\n");
		ft_putstr(WHITE);

	ft_putstr("\t precision between \"");
	ft_putnbr(max_lenght);
	ft_putstr("\" and \"0\"");
	ft_temporize(5);

	precision = max_lenght;
	while (precision >= len_decimal)
	{
		if (ft_test_Decimal_with_precision(decimal, decimal_with_plus_precision_space, precision, &num_test))
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
	ft_putstr("-- decimal  with \"min_len\" and \"precision\" i and \"+\"--\n");
		ft_putstr(WHITE);

	ft_putstr("\t min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and\n");
	ft_putstr("\t precision between \"((lenght + ");
	
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\"\n");
	ft_temporize(10);
	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		precision = (max_lenght - min_length);
		while (precision >= len_decimal)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal, decimal_with_plus_minlen_precision_space
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
	ft_putstr("-- decimal with \"+\" and \"min_len\" and \"precision\" and \"dash\" <min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\">---\n");
		ft_putstr(WHITE);
	ft_temporize(10);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		precision = (max_lenght - min_length);
		while (precision >= len_decimal)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal,
						decimal_with_plus_dash_minlen_precision_space, min_length, precision,
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
/*
	if (ft_test_String_simple_flag(decimal,"%#s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"% s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"%+s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"%hhs", &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"%lls", &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"%hs" , &num_test))
		succeed++;
*/


	ft_putstr(GREEN);
	ft_putstr("------------------------- decimal test -------------------------\n");
	ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, decimal_simple_space_zero, &num_test))
		succeed++;

		ft_putstr(GREEN);
	ft_putstr("------------------ decimal with >\"-\"< ---------------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, decimal_with_dash_space, &num_test))
		succeed++;

  ft_putstr(GREEN);
	ft_putstr("------------------ decimal with \"min_len\" -------------------\n");
		ft_putstr(WHITE);
	ft_putstr("\t min_length between \"0\" and \"");
	ft_putnbr(max_lenght);
	ft_putstr("\"\n");
	ft_temporize(5);

	min_length = 0;
	while (min_length < max_lenght)
	{
		if (ft_test_Decimal_with_minlen(decimal, decimal_with_minlen_space_zero, min_length, &num_test))
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
	ft_putstr("---------------- decimal with \"precision\" ------------------\n");
		ft_putstr(WHITE);

	ft_putstr("\t precision between \"");
	ft_putnbr(max_lenght);
	ft_putstr("\" and \"0\"\n");
	ft_temporize(5);

	precision = len_decimal;
	while (precision >= 0)
	{
		if (ft_test_Decimal_with_precision(decimal, decimal_with_precision_space_zero, precision, &num_test))
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
	ft_putstr("-------- decimal with \"min_len\" and \"precision\" --------\n");
		ft_putstr(WHITE);

	ft_putstr("\t min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and\n");
	ft_putstr("\t precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(")\" and \"0\"\n");
	ft_temporize(10);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		precision = (max_lenght);// - min_length);
		while (precision >= len_decimal)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal, decimal_with_minlen_precision_space_zero
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
	ft_putstr("-- decimal with \"min_len\" and \"precision\" and \"dash\" <min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\">---\n");
		ft_putstr(WHITE);
	ft_temporize(10);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		precision = (max_lenght - min_length);
		while (precision >= len_decimal)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal,
						decimal_with_dash_minlen_precision_space_zero, min_length, precision,
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
	ft_putstr("--------------------- decimal with \"+\" --------------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, decimal_with_plus_space_zero, &num_test))
		succeed++;

		ft_putstr(GREEN);
	ft_putstr("-------------- decimal with >\"-\" and \"+\"<  --------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, decimal_with_plus_dash_space_zero, &num_test))
		succeed++;

		ft_putstr(GREEN);
	ft_putstr("----------- decimal with \"min_len\" and \"+\" ---------++--\n");
		ft_putstr(WHITE);
	ft_putstr("\t min_length between \"0\" and \"");
	ft_putnbr(max_lenght);
	ft_putstr("\"\n");
	ft_temporize(5);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		if (ft_test_Decimal_with_minlen(decimal, decimal_with_plus_minlen_space_zero, min_length, &num_test))
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
	ft_putstr("------------ decimal with \"precision\" and \"+\"- ----------\n");
		ft_putstr(WHITE);

	ft_putstr("\t precision between \"");
	ft_putnbr(max_lenght);
	ft_putstr("\" and \"0\"");
	ft_temporize(5);

	precision = max_lenght;
	while (precision >= len_decimal)
	{
		if (ft_test_Decimal_with_precision(decimal, decimal_with_plus_precision_space_zero, precision, &num_test))
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
	ft_putstr("-- decimal  with \"min_len\" and \"precision\" i and \"+\"--\n");
		ft_putstr(WHITE);

	ft_putstr("\t min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and\n");
	ft_putstr("\t precision between \"((lenght + ");
	
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\"\n");
	ft_temporize(10);
	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		precision = (max_lenght - min_length);
		while (precision >= len_decimal)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal, decimal_with_plus_minlen_precision_space_zero
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
	ft_putstr("-- decimal with \"+\" and \"min_len\" and \"precision\" and \"dash\" <min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\">---\n");
		ft_putstr(WHITE);
	ft_temporize(10);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		precision = (max_lenght - min_length);
		while (precision >= len_decimal)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal,
						decimal_with_plus_dash_minlen_precision_space_zero, min_length, precision,
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
/*
	ft_putstr(GREEN);
	ft_putstr("\t\t-- *char printf don\'t manage ---\n");
	ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_String_simple_flag(decimal,"%#s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"% s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"%+s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"%hhs", &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"%lls", &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"%hs" , &num_test))
		succeed++;
*/

	ft_putstr(GREEN);
	ft_putstr("------------------------- decimal test -------------------------\n");
	ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, decimal_simple_space_zero_apo, &num_test))
		succeed++;

		ft_putstr(GREEN);
	ft_putstr("------------------ decimal with >\"-\"< ---------------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, decimal_with_dash_space_zero_apo, &num_test))
		succeed++;

  ft_putstr(GREEN);
	ft_putstr("------------------ decimal with \"min_len\" -------------------\n");
		ft_putstr(WHITE);
	ft_putstr("\t min_length between \"0\" and \"");
	ft_putnbr(max_lenght);
	ft_putstr("\"\n");
	ft_temporize(5);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		if (ft_test_Decimal_with_minlen(decimal, decimal_with_minlen_space_zero_apo, min_length, &num_test))
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
	ft_putstr("---------------- decimal with \"precision\" ------------------\n");
		ft_putstr(WHITE);

	ft_putstr("\t precision between \"");
	ft_putnbr(max_lenght);
	ft_putstr("\" and \"0\"\n");
	ft_temporize(5);

	precision = max_lenght;
	while (precision >= len_decimal)
	{
		if (ft_test_Decimal_with_precision(decimal, decimal_with_precision_space_zero_apo, precision, &num_test))
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
	ft_putstr("-------- decimal with \"min_len\" and \"precision\" --------\n");
		ft_putstr(WHITE);

	ft_putstr("\t min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and\n");
	ft_putstr("\t precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(")\" and \"0\"\n");
	ft_temporize(10);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		precision = (max_lenght);// - min_length);
		while (precision >= len_decimal)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal, decimal_with_minlen_precision_space_zero_apo
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
	ft_putstr("-- decimal with \"min_len\" and \"precision\" and \"dash\" <min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\">---\n");
		ft_putstr(WHITE);
	ft_temporize(10);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		precision = (max_lenght - min_length);
		while (precision >= len_decimal)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal,
						decimal_with_dash_minlen_precision_space_zero_apo, min_length, precision,
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
	ft_putstr("--------------------- decimal with \"+\" --------------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, decimal_with_plus_space_zero_apo, &num_test))
		succeed++;

		ft_putstr(GREEN);
	ft_putstr("-------------- decimal with >\"-\" and \"+\"<  --------------\n");
		ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, decimal_with_plus_dash_space_zero_apo, &num_test))
		succeed++;

		ft_putstr(GREEN);
	ft_putstr("----------- decimal with \"min_len\" and \"+\" ---------++--\n");
		ft_putstr(WHITE);
	ft_putstr("\t min_length between \"0\" and \"");
	ft_putnbr(max_lenght);
	ft_putstr("\"\n");
	ft_temporize(5);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		if (ft_test_Decimal_with_minlen(decimal,decimal_with_plus_minlen_space_zero_apo, min_length, &num_test))
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
	ft_putstr("------------ decimal with \"precision\" and \"+\"- ----------\n");
		ft_putstr(WHITE);

	ft_putstr("\t precision between \"");
	ft_putnbr(max_lenght);
	ft_putstr("\" and \"0\"");
	ft_temporize(5);

	precision = max_lenght;
	while (precision >= len_decimal)
	{
		if (ft_test_Decimal_with_precision(decimal, decimal_with_plus_precision_space_zero_apo, precision, &num_test))
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
	ft_putstr("-- decimal  with \"min_len\" and \"precision\" i and \"+\"--\n");
		ft_putstr(WHITE);

	ft_putstr("\t min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and\n");
	ft_putstr("\t precision between \"((lenght + ");
	
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\"\n");
	ft_temporize(10);
	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		precision = (max_lenght - min_length);
		while (precision >= len_decimal)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal, decimal_with_plus_minlen_precision_space_zero_apo
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
	ft_putstr("-- decimal with \"+\" and \"min_len\" and \"precision\" and \"dash\" <min_length between \"0\" and \"(lenght +");
	ft_putnbr(accuracy);
	ft_putstr(") of str\" and precision between \"((lenght + ");
	ft_putnbr(accuracy);
	ft_putstr(") - min_length++)\" and \"0\">---\n");
		ft_putstr(WHITE);
	ft_temporize(10);

	min_length = len_decimal;
	while (min_length < max_lenght)
	{
		precision = (max_lenght - min_length);
		while (precision >= len_decimal)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal,
						decimal_with_plus_dash_minlen_precision_space_zero_apo, min_length, precision,
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
/*
	ft_putstr(GREEN);
	ft_putstr("\t\t-- *char printf don\'t manage ---\n");
	ft_putstr(WHITE);
	ft_temporize(5);

	if (ft_test_String_simple_flag(decimal,"%#s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"% s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"%+s" , &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"%hhs", &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"%lls", &num_test))
		succeed++;
	if (ft_test_String_simple_flag(decimal,"%hs" , &num_test))
		succeed++;
*/



	ft_putstr("---------------------- end decimal test ----------------------\n");
	ft_put_summary(num_test, succeed);//return (nbr_test_ok);
}
