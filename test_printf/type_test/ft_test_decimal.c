/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_decimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 16:31:38 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/27 14:30:21 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int		run_test_minlenght_precision(int decimal, char **format, int *num_test,
		int accuracy, char **titles)
{
	int succeed;
	int min_length;
	int max_lenght;
	int len_decimal;
	int precision;

	len_decimal = ft_nbrlen(decimal);
	if (len_decimal < 5)
			len_decimal = 5;
	max_lenght = len_decimal + accuracy;
	min_length = 0;
	succeed = 0;

	ft_putstr(GREEN);
	ft_putstr(titles[4]);
		ft_putstr(WHITE);
//	ft_temporize(10);

	while (min_length <= max_lenght)
	{
		if (ft_test_Decimal_with_minlen(decimal, format[4] 
					,min_length, num_test))
			succeed++;
		if (min_length < max_lenght)
		{
			ft_putstr(GREEN);
			ft_putstr("\n\t\t------------------------------------\n");
			ft_putstr(WHITE);
		}
		min_length++;
	}

		ft_putstr(GREEN);
	ft_putstr(titles[5]);
		ft_putstr(WHITE);
//	ft_temporize(10);

	precision = (max_lenght);
	while (precision >= 0)
	{
		if (ft_test_Decimal_with_precision(decimal, format[5] 
					, precision, num_test))
			succeed++;
		precision--;
		if (precision > 0)
		{
			ft_putstr(GREEN);
			ft_putstr("\n\t\t------------------------------------\n");
			ft_putstr(WHITE);
		}
	}
	return (succeed);
}

int		run_test(int decimal, char **format, int *num_test, int accuracy, char **titles)
{
	int succeed;
	int min_length;
	int max_lenght;
	int len_decimal;
	int precision;

	len_decimal = ft_nbrlen(decimal);
	if (len_decimal < 5)
			len_decimal = 5;
	max_lenght = len_decimal + accuracy;
	min_length = 0;
	succeed = 0;
	precision = max_lenght;

		ft_putstr(GREEN);
	ft_putstr(titles[0]);
		ft_putstr(WHITE);
//	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal,format[0], num_test))
		succeed++;
		ft_putstr(GREEN);
	ft_putstr(titles[1]);
		ft_putstr(WHITE);
//	ft_temporize(5);

	if (ft_test_Decimal_simple_flag(decimal, format[1], num_test))
		succeed++;

		ft_putstr(GREEN);
	ft_putstr(titles[2]);
		ft_putstr(WHITE);
//	ft_temporize(10);

	min_length = 0;
	while (min_length <= max_lenght)
	{
		precision = (max_lenght);
		while (precision >= 0)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal, format[2] 
						,min_length, precision, num_test))
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
	ft_putstr(titles[3]);
		ft_putstr(WHITE);
//	ft_temporize(10);

	min_length = len_decimal;
	while (min_length <= max_lenght)
	{
		precision = (max_lenght);
		while (precision >= 0)
		{
			if (ft_test_Decimal_with_minlen_precision(decimal,
						format[3] , min_length, precision,
						num_test))
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

	return (succeed);
}


void		ft_test_decimal(int decimal)
{
	//int nbr_test_ok = 0;

	int		succeed  = 0;
	int		accuracy = ft_nbrlen(decimal) * 2;
	int		num_test = 0;

	char *simple_decimal_format[6];
	char *titles_simple_decimal[6];

	char *decimal_simple_title	
		= "\t----------------------- simple decimal -------------------------\n";
	char *decimal_simple						= "%d";
	char *decimal_simple_dash_title
		= "\t----------------- decimal with >\"dash\"< ----------------------\n";
	char *decimal_with_dash						= "%-d";


	char *decimal_simple_minlen_precision_title
		= "\t--------- decimal with \"min_len\" and \"precision\" -----------\n";
	char *decimal_with_minlen_precision			= "%*.*d";
	char *decimal_simple_dash_minlen_precision_title
		= "\t----- decimal with \"dash\", \"min_len\" and \"precision\" -----\n";
	char *decimal_with_dash_minlen_precision	= "%-*.*d";

	char *decimal_simple_minlen_title
		= "\t------------- decimal with only \"min_len\" --------------------\n";
	char *decimal_with_minlen			= "%*d";
	char *decimal_simple_precision_title
		= "\t----- decimal with  only \"precision\" -----\n";
	char *decimal_with_precision	= "%.*d";

	simple_decimal_format[0] = decimal_simple;
	simple_decimal_format[1] = decimal_with_dash;
	simple_decimal_format[2] = decimal_with_minlen_precision;
	simple_decimal_format[3] = decimal_with_dash_minlen_precision;
	simple_decimal_format[4] = decimal_with_minlen;
	simple_decimal_format[5] = decimal_with_precision;

	titles_simple_decimal[0] = decimal_simple_title;
	titles_simple_decimal[1] = decimal_simple_dash_title;
	titles_simple_decimal[2] = decimal_simple_minlen_precision_title;
	titles_simple_decimal[3] = decimal_simple_dash_minlen_precision_title;
	titles_simple_decimal[4] = decimal_simple_minlen_title;
	titles_simple_decimal[5] = decimal_simple_precision_title;

	succeed += run_test(decimal, simple_decimal_format, &num_test, accuracy, 
			titles_simple_decimal);
	succeed += run_test_minlenght_precision(decimal,simple_decimal_format,
			&num_test, accuracy, titles_simple_decimal);

	char *decimal_plus_format[6];
	char *titles_decimal_plus[6];

	char *decimal_plus_title
		= "\t---------------------- decimal with \"+\" -----------------------\n";
	char *decimal_with_plus			= "%+d";
	char *decimal_plus_dash_title
		= "\t--------------- decimal with \"dash\" and \"+\" -----------------\n";
	char *decimal_with_plus_dash	= "%+-d";
	char *decimal_plus_minlen_precision_title
		= "\t------- decimal with \"+\", \"min_len\" and \"precision\" -------\n";
	char *decimal_with_plus_minlen_precision= "%+*.*d";
	char *decimal_plus_dash_minlen_precision_title
		= "\t-- decimal with \"+\", \"dash\", \"min_len\" and \"precision\" --\n";
	char *decimal_with_plus_dash_minlen_precision	= "%+-*.*d";

	decimal_plus_format[0] = decimal_with_plus;;
	decimal_plus_format[1] = decimal_with_plus_dash;
	decimal_plus_format[2] = decimal_with_plus_minlen_precision;
	decimal_plus_format[3] = decimal_with_plus_dash_minlen_precision;

	titles_decimal_plus[0] = decimal_plus_title;
	titles_decimal_plus[1] = decimal_plus_dash_title;
	titles_decimal_plus[2] = decimal_plus_minlen_precision_title;
	titles_decimal_plus[3] = decimal_plus_dash_minlen_precision_title;

	succeed += run_test(decimal, decimal_plus_format, &num_test, accuracy,
			titles_decimal_plus);

	char *decimal_zero_format[4];
	char *titles_decimal_zero[4];

	char *decimal_zero_title
		= "\t----------------------- decimal with \"0\" ----------------------\n";
	char *decimal_with_zero	= "%0d";
	char *decimal_zero_dash_title
		= "\t---------------- decimal with \"0\" and \"dash\" ----------------\n";
	char *decimal_with_zero_dash		= "%0-d";
	char *decimal_zero_minlen_precision_title
		= "\t------- decimal with \"0\", \"min_len\" and \"precision\" -------\n";
	char *decimal_with_zero_minlen_precision	= "%0*.*d";
	char *decimal_zero_dash_minlen_precision_title
		= "\t-- decimal with \"dash\", \"0\", \"min_len\" and \"precision\" --\n";
	char *decimal_with_zero_dash_minlen_precision= "%-0*.*d";

	decimal_zero_format[0] = decimal_with_zero;;
	decimal_zero_format[1] = decimal_with_zero_dash;
	decimal_zero_format[2] = decimal_with_zero_minlen_precision;
	decimal_zero_format[3] = decimal_with_zero_dash_minlen_precision;

	titles_decimal_zero[0] = decimal_zero_title;
	titles_decimal_zero[1] = decimal_zero_dash_title;
	titles_decimal_zero[2] = decimal_zero_minlen_precision_title;
	titles_decimal_zero[3] = decimal_zero_dash_minlen_precision_title;

	succeed += run_test(decimal, decimal_zero_format, &num_test, accuracy,
			titles_decimal_zero);


	char *decimal_zero_plus_format[4];
	char *titles_decimal_zero_plus[4];

	char *decimal_zero_plus_title
		= "\t---------------- decimal with \"0\" ans \"+\" -------------------\n";
	char *decimal_with_zero_plus= "%0+d";
	char *decimal_zero_plus_dash_title
		= "\t------------ decimal with \"0\", \"+\" and \"dash\" -------------\n";
	char *decimal_with_zero_plus_dash		= "%0+-d";
	char *decimal_zero_plus_minlen_precision_title
		= "\t--- decimal with \"0\", \"+\", \"min_len\" and \"precision\" ----\n";
	char *decimal_with_zero_plus_minlen_precision	= "%0+*.*d";
	char *decimal_zero_plus_dash_minlen_precision_title
		= "\t- decimal with \"dash\", \"0\", \"+\", \"min_len\" and \"precision\" -\n";
	char *decimal_with_zero_plus_dash_minlen_precision= "%-0+*.*d";

	decimal_zero_plus_format[0] = decimal_with_zero_plus;
	decimal_zero_plus_format[1] = decimal_with_zero_plus_dash;
	decimal_zero_plus_format[2] = decimal_with_zero_plus_minlen_precision;
	decimal_zero_plus_format[3] = decimal_with_zero_plus_dash_minlen_precision;

	titles_decimal_zero_plus[0] = decimal_zero_plus_title;
	titles_decimal_zero_plus[1] = decimal_zero_plus_dash_title;
	titles_decimal_zero_plus[2] = decimal_zero_plus_minlen_precision_title;
	titles_decimal_zero_plus[3] = decimal_zero_plus_dash_minlen_precision_title;

	succeed += run_test(decimal, decimal_zero_plus_format, &num_test, accuracy,
			titles_decimal_zero_plus);

	char *decimal_zero_space_format[4];
	char *titles_decimal_zero_space[4];

	char *decimal_zero_space_title
		= "\t---------------- decimal with \"0\" and \"space\" ---------------\n";
	char *decimal_with_zero_space	= "%0 d";
	char *decimal_zero_dash_space_title
		= "\t----------- decimal with \"0\", \"space\" and \"dash\"-----------\n";
	char *decimal_with_zero_space_dash		= "%0 -d";
	char *decimal_zero_space_minlen_precision_title
		= "\t------- decimal with \"0\", \"space\", \"min_len\" and \"precision\" -------\n";
	char *decimal_with_zero_space_minlen_precision	= "%0 *.*d";
	char *decimal_zero_space_dash_minlen_precision_title
		= "\t-- decimal with \"dash\", \"0\", \"space\', \"min_len\" and \"precision\" --\n";
	char *decimal_with_dash_zero_minlen_precision= "%-0 *.*d";

	decimal_zero_space_format[0] = decimal_with_zero_space;
	decimal_zero_space_format[1] = decimal_with_zero_space_dash;
	decimal_zero_space_format[2] = decimal_with_zero_space_minlen_precision;
	decimal_zero_space_format[3] = decimal_with_dash_zero_minlen_precision;

	titles_decimal_zero_space[0] = decimal_zero_title;
	titles_decimal_zero_space[1] = decimal_zero_dash_title;
	titles_decimal_zero_space[2] = decimal_zero_minlen_precision_title;
	titles_decimal_zero_space[3] = decimal_zero_dash_minlen_precision_title;

	succeed += run_test(decimal, decimal_zero_space_format, &num_test, accuracy,
			titles_decimal_zero_space);

	char *decimal_zero_space_plus_format[4];
	char *titles_decimal_zero_space_plus[4];

	char *decimal_zero_space_plus_title
		= "\t------------ decimal with \"0\", \"space\" and \"+\" ------------\n";
	char *decimal_with_zero_space_plus	= "%0 +d";
	char *decimal_zero_space_dash_plus_title
		= "\t------- decimal with \"0\", \"space\", \"dash\" and \"+\" -------\n";
	char *decimal_with_zero_space_dash_plus		= "%0 -+d";
	char *decimal_zero_space_minlen_precision_plus_title
		= "\t-- decimal with \"0\", \"space\", \"+\", \"min_len\", and \"precision\" --\n";
	char *decimal_with_zero_space_plus_minlen_precision	= "%0 +*.*d";
	char *decimal_zero_space_dash_plus_minlen_precision_title
		= "\t-- decimal with \"dash\", \"0\", \"space\', \"+\", \"min_len\" and \"precision\" --\n";
	char *decimal_with_dash_zero_plus_minlen_precision= "%-0 +*.*d";

	decimal_zero_space_plus_format[0] = decimal_with_zero_space_plus;
	decimal_zero_space_plus_format[1] = decimal_with_zero_space_dash_plus;
	decimal_zero_space_plus_format[2] = decimal_with_zero_space_plus_minlen_precision;
	decimal_zero_space_plus_format[3] = decimal_with_dash_zero_plus_minlen_precision;

	titles_decimal_zero_space_plus[0] = decimal_zero_space_plus_title;
	titles_decimal_zero_space_plus[1] = decimal_zero_space_dash_plus_title;
	titles_decimal_zero_space_plus[2] = decimal_zero_plus_minlen_precision_title;
	titles_decimal_zero_space_plus[3] = decimal_zero_space_dash_plus_minlen_precision_title;

	succeed += run_test(decimal, decimal_zero_space_plus_format, &num_test, accuracy,
			titles_decimal_zero_space_plus);

	char *decimal_conversion_format[6];
	char *titles_conversion_hh[6];

	char *decimal_simple_space_zero_apo								= "%'0 hhd";
	char *decimal_with_dash_space_zero_apo							= "%'0 -hhd";
	char *decimal_with_minlen_precision_space_zero_apo				= "%'0 *.*hhd";
	char *decimal_with_plus_dash_minlen_precision_space_zero_apo	= "%'+-0 *.*hhd";
	char *decimal_with_minlen_space_zero_apo						= "%'0 *hhd";
	char *decimal_with_precision_space_zero_apo						= "%'0 .*hhd";
	
	char *decimal_zero_space_dash_title 	= 
		"\t-------------- decimal with \"dash\", \"0\", \"space\' ----------\n";
	char *decimal_zero_space_minlen_title 	
		= "\t--------- decimal with \"0\", \"space\',and \"min_len\" ---------\n";
	char *decimal_zero_space_precision_title 	=
		"\t-------- decimal with \"0\", \"space\', and \"precision\" -------\n";

	decimal_conversion_format[0] = decimal_simple_space_zero_apo;
	decimal_conversion_format[1] = decimal_with_dash_space_zero_apo;
	decimal_conversion_format[2] = decimal_with_minlen_precision_space_zero_apo;
	decimal_conversion_format[3] = decimal_with_plus_dash_minlen_precision_space_zero_apo;
	decimal_conversion_format[4] = decimal_with_minlen_space_zero_apo;
	decimal_conversion_format[5] = decimal_with_precision_space_zero_apo;

	titles_conversion_hh[0] = decimal_zero_space_title;
	titles_conversion_hh[1] = decimal_zero_space_dash_title;
	titles_conversion_hh[2] = decimal_zero_space_minlen_precision_title;
	titles_conversion_hh[3] = decimal_zero_space_dash_plus_minlen_precision_title;
	titles_conversion_hh[4] = decimal_zero_space_minlen_title;
	titles_conversion_hh[5] = decimal_zero_space_precision_title;

	succeed += run_test(decimal, decimal_conversion_format, &num_test, accuracy, 
			titles_conversion_hh);
	succeed += run_test_minlenght_precision(decimal, decimal_conversion_format,
			&num_test, accuracy, titles_conversion_hh);

	decimal_simple_space_zero_apo								= "%'0 hd";
	decimal_with_dash_space_zero_apo							= "%'0 -hd";
	decimal_with_minlen_precision_space_zero_apo				= "%'0 *.*hd";
	decimal_with_plus_dash_minlen_precision_space_zero_apo	= "%'+-0 *.*hd";
	decimal_with_minlen_space_zero_apo						= "%'0 *hd";
	decimal_with_precision_space_zero_apo						= "%'0 .*hd";

	decimal_conversion_format[0] = decimal_simple_space_zero_apo;
	decimal_conversion_format[1] = decimal_with_dash_space_zero_apo;
	decimal_conversion_format[2] = decimal_with_minlen_precision_space_zero_apo;
	decimal_conversion_format[3] = decimal_with_plus_dash_minlen_precision_space_zero_apo;
	decimal_conversion_format[4] = decimal_with_minlen_space_zero_apo;
	decimal_conversion_format[5] = decimal_with_precision_space_zero_apo;

	titles_conversion_hh[0] = decimal_zero_space_title;
	titles_conversion_hh[1] = decimal_zero_space_dash_title;
	titles_conversion_hh[2] = decimal_zero_space_minlen_precision_title;
	titles_conversion_hh[3] = decimal_zero_space_dash_plus_minlen_precision_title;
	titles_conversion_hh[4] = decimal_zero_space_minlen_title;
	titles_conversion_hh[5] = decimal_zero_space_precision_title;

	succeed += run_test(decimal, decimal_conversion_format, &num_test, accuracy, 
			titles_conversion_hh);
	succeed += run_test_minlenght_precision(decimal, decimal_conversion_format,
			&num_test, accuracy, titles_conversion_hh);

	decimal_simple_space_zero_apo								= "%'0 jd";
	decimal_with_dash_space_zero_apo							= "%'0 -jd";
	decimal_with_minlen_precision_space_zero_apo				= "%'0 *.*jd";
	decimal_with_plus_dash_minlen_precision_space_zero_apo		= "%'+-0 *.*jd";
	decimal_with_minlen_space_zero_apo							= "%'0 *jd";
	decimal_with_precision_space_zero_apo						= "%'0 .*jd";

	decimal_conversion_format[0] = decimal_simple_space_zero_apo;
	decimal_conversion_format[1] = decimal_with_dash_space_zero_apo;
	decimal_conversion_format[2] = decimal_with_minlen_precision_space_zero_apo;
	decimal_conversion_format[3] = decimal_with_plus_dash_minlen_precision_space_zero_apo;
	decimal_conversion_format[4] = decimal_with_minlen_space_zero_apo;
	decimal_conversion_format[5] = decimal_with_precision_space_zero_apo;

	titles_conversion_hh[0] = decimal_zero_space_title;
	titles_conversion_hh[1] = decimal_zero_space_dash_title;
	titles_conversion_hh[2] = decimal_zero_space_minlen_precision_title;
	titles_conversion_hh[3] = decimal_zero_space_dash_plus_minlen_precision_title;
	titles_conversion_hh[4] = decimal_zero_space_minlen_title;
	titles_conversion_hh[5] = decimal_zero_space_precision_title;

	succeed += run_test(decimal, decimal_conversion_format, &num_test, accuracy, 
			titles_conversion_hh);
	succeed += run_test_minlenght_precision(decimal, decimal_conversion_format,
			&num_test, accuracy, titles_conversion_hh);



	decimal_simple_space_zero_apo								= "%'0 zd";
	decimal_with_dash_space_zero_apo							= "%'0 -zd";
	decimal_with_minlen_precision_space_zero_apo				= "%'0 *.*zd";
	decimal_with_plus_dash_minlen_precision_space_zero_apo		= "%'+-0 *.*zd";
	decimal_with_minlen_space_zero_apo							= "%'0 *zd";
	decimal_with_precision_space_zero_apo						= "%'0 .*zd";

	decimal_conversion_format[0] = decimal_simple_space_zero_apo;
	decimal_conversion_format[1] = decimal_with_dash_space_zero_apo;
	decimal_conversion_format[2] = decimal_with_minlen_precision_space_zero_apo;
	decimal_conversion_format[3] = decimal_with_plus_dash_minlen_precision_space_zero_apo;
	decimal_conversion_format[4] = decimal_with_minlen_space_zero_apo;
	decimal_conversion_format[5] = decimal_with_precision_space_zero_apo;

	titles_conversion_hh[0] = decimal_zero_space_title;
	titles_conversion_hh[1] = decimal_zero_space_dash_title;
	titles_conversion_hh[2] = decimal_zero_space_minlen_precision_title;
	titles_conversion_hh[3] = decimal_zero_space_dash_plus_minlen_precision_title;
	titles_conversion_hh[4] = decimal_zero_space_minlen_title;
	titles_conversion_hh[5] = decimal_zero_space_precision_title;

	succeed += run_test(decimal, decimal_conversion_format, &num_test, accuracy, 
			titles_conversion_hh);
	succeed += run_test_minlenght_precision(decimal, decimal_conversion_format,
			&num_test, accuracy, titles_conversion_hh);

























	/*
	char *decimal_signed_char_format[4];
	char *titles_decimal_signed_char[4];

	char *decimal_signed_char_title
		= "\t---------------------- decimal with hh ------------------------\n";
	char *decimal_with_signed_char							= "%hhd";

	char *decimal_dash_signed_char_title
		= "\t------ decimal with >\"dash\"< with conversionsion hh ---------\n";
	char *decimal_with_dash_signed_char					= "%-hhd";

	char *decimal_minlen_precision_signed_char_title
		= "\t- decimal with \"min_len\" and \"precision\" whith conversion hh -\n";
	char *decimal_with_minlen_precision_signed_char			= "%*.*hhd";
	
	char *decimal_simple_dash_minlen_precision_signed_char_title
		= "\t- decimal with \"dash\", \"min_len\" and \"precision\" with conversion hh -\n";
	char *decimal_with_dash_minlen_precision_signed_char	= "%-*.*zd";

	decimal_signed_char_format[0] = decimal_with_signed_char;
	decimal_signed_char_format[1] = decimal_with_signed_char;
	decimal_signed_char_format[2] = decimal_with_minlen_precision_signed_char;
	decimal_signed_char_format[3] = decimal_with_dash_minlen_precision_signed_char;

	titles_decimal_signed_char[0] = decimal_signed_char_title;
	titles_decimal_signed_char[1] = decimal_dash_signed_char_title;
	titles_decimal_signed_char[2] = decimal_minlen_precision_signed_char_title;
	titles_decimal_signed_char[3] = decimal_simple_dash_minlen_precision_signed_char_title;

	succeed += run_test(decimal, decimal_signed_char_format, &num_test, accuracy, 
			titles_decimal_signed_char);
*/
/*
	char *decimal_signed_char
		= "\t------- decimal with \"0\", \"space\", \"dash\" and \"+\" -------\n";
	char *decimal_with_zero_space_dash_plus		= "%0 -+d";
	char *decimal_zero_space_minlen_precision_plus_title
		= "\t-- decimal with \"0\", \"space\", \"+\", \"min_len\", and \"precision\" --\n";
	char *decimal_with_zero_space_plus_minlen_precision	= "%0 +*.*d";
	char *decimal_zero_space_dash_plus_minlen_precision_title
		= "\t-- decimal with \"dash\", \"0\", \"space\', \"+\", \"min_len\" and \"precision\" --\n";
	char *decimal_with_dash_zero_plus_minlen_precision= "%-0 +*.*d";

	ft_putstr(GREEN);
	ft_putstr("\t\t-- *char printf don\'t manage ---\n");
	ft_putstr(WHITE);
	ft_temporize(5);

	int *pt_num_test = &num_test;

	if (ft_test_Decimal_simple_flag(decimal, "%d", &pt_num_test ))
		succeed++;
*/



/*
 * if (ft_test_String_simple_flag(decimal,"% s" , &num_test))
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

	ft_putstr("---------------------- end  decimal <");
	ft_putnbr(decimal);
	ft_putstr("> test ----------------------\n");
	ft_put_summary(num_test, succeed);//return (nbr_test_ok);
}
