/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 13:02:44 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/03 14:34:52 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include <stdio.h>
/* 
 * ft_putstr("");
 * ft_putstr("------------------------ basics test ------------------------\n");
 * ft_putstr("\n");
*/	


void	print(char *str)
{
	int ret;

	ft_putstr(" - <");
	ret = ft_printf(str);
	ft_putstr(">\t return : ");
	ft_putnbr(ret);
	ft_putstr("\n");
}

int		main(void)
{

	ft_putstr("************************* ft_printf *************************\n");
	ft_putstr("------------------------ basics test ------------------------\n");
	ft_putstr("-------------------- print first param test -----------------\n");

	printf(" -1- to print : <NULL> \t\t\t\t\t print :");
	fflush(stdout);
	print(NULL);

	printf(" -2- to print : <%s> \t\t\t\t\t print :", "");
	fflush(stdout);
	print("");

	printf(" -3- to print : <%s> \t\t\t\t print :", "bonjour");
	fflush(stdout);
	print("bonjour");

	ft_putstr("---------------------- test with args ----------------------\n");
	ft_putstr("------------------------ flags test ------------------------\n");
	ft_putstr("--------------------- test with *char  ---------------------\n");
/*	char *arg_1 = "arg_1";
	char *arg_2 = "arg_2";
	char *arg_3 = "arg_3";
	char *arg_4 = "arg_4";
	char *arg_5 = "arg_5";
	char *arg_6 = "arg_6";
*/
//	char *str =  "abcdefghijklmnopqrstuvwxyz></?a!@#$%^&*()_=";
	int number = 217483647;
	ft_putstr("---------------------- symple *char  -----------------------\n");


	int ret1, ret2;

//	str = ft_itoa(number);
//	printf("-1-\t%s\n",  ft_itoa(number));
	//fflush(stdout);
//	printf("-1-\t%s\n", ft_itoa(number));

	ret1 = printf("-1->%s<\n", str);
	fflush(stdout);
	ret2 =ft_printf("-1->%s<\n", str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	
	ft_putstr("------------------- *char with >\"-\"< ---------------------\n");
	 ret1 = printf("-2->%-s<\n", str);
	fflush(stdout);
	ret2 = ft_printf("-2->%-s<\n", str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("------------- *char with min_len == 10 > len ---------------\n");

    ret1 =  printf("-3->%10s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-3->%10s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("------- *char with min_len == 10 > len and >\"-\"< ----------\n");

	ret1 = printf("-4->%-10s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-4->%-10s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("--------- *char with precision == 10  > len str ------------\n");

	ret1 = printf("-5->%.10s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-5->%.10s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------- *char with precision == 5 < len str -------------\n");

	ret1 = printf("-6->%.5s<\n",  str);
	fflush(stdout);
	ret2 =ft_printf("-6->%.5s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("----- *char with precision == 5 < len stri with >\"-\"< -----\n");

	ret1 = printf("-7->%-.5s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-7->%-.5s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- *char with min_len == 10 > lrn and  precision == 10  > len str --\n");

	ret1 = printf("-8->%10.10s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-8->%10.10s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- *char with min_len == 10 > lrn and  precision == 1  > len str --\n");

	ret1 = printf("-9->%10.1s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-9->%10.1s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- *char with min_len == 10 > lrn and  precision == 2 > len str --\n");

	ret1 = printf("-10->%10.2s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-10->%10.2s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- *char with min_len == 10 > lrn and  precision == 3  > len str --\n");

	ret1 = printf("-11->%10.3s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-11->%10.3s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- *char with min_len == 10 > lrn and  precision == 4  > len str --\n");

	ret1 = printf("-12->%10.4s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-12->%10.4s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- *char with min_len == 10 > lrn and  precision == 5  > len str --\n");

	ret1 = printf("-13->%10.5s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-13->%10.5s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- *char with min_len == 10 > lrn and  precision == 6  > len str --\n");

	ret1 = printf("-14->%10.6s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-14->%10.6s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- *char with min_len == 10 > lrn and  precision == 7  > len str --\n");

	ret1 = printf("-15->%10.7s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-15->%10.7s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("- *char with min_len == 10 > lrn and  precision == 70  > len str -\n");

	ret1 = printf("-16->%10.70s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-16->%10.70s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- *char with min_len == 10 > lrn and  precision == 10  > len str -with >\"-\"<-\n");

	ret1 = printf("-17->%-10.10s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-17->%-10.10s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- *char with min_len == 10 > lrn and  precision == 1  > len str -with >\"-\"<-\n");

	ret1 = printf("-18->%-10.1s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-18->%-10.1s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- *char with min_len == 10 > lrn and  precision == 2 > len str -with >\"-\"<-\n");

	ret1 = printf("-19->%-10.2s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-19->%-10.2s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- *char with min_len == 10 > lrn and  precision == 3  > len str -with >\"-\"<-\n");

	ret1 = printf("-20->%-10.3s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-20->%-10.3s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- *char with min_len == 10 > lrn and  precision == 4  > len str -with >\"-\"<-\n");

	ret1 = printf("-21->%-10.4s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-21->%-10.4s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- *char with min_len == 10 > lrn and  precision == 5  > len str -with >\"-\"<-\n");

	ret1 = printf("-22->%-10.5s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-22->%-10.5s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- *char with min_len == 10 > lrn and  precision == 6  > len str -with >\"-\"<-\n");

	ret1 = printf("-23->%-10.6s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-23->%-10.6s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- *char with min_len == 10 > lrn and  precision == 7  > len str with >\"-\"<--\n");

	ret1 = printf("-24->%-10.7s<\n",  str);
	fflush(stdout);
	ret2 = ft_printf("-24->%-10.7s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("- *char with min_len == 10 > lrn and  precision == 70  > len str with >\"-\"<-\n");

	ret1 = printf("-25->%-10.70s<\n",  str);
	fflush(stdout);
	ret2 =ft_printf("-25->%-10.70s<\n",  str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-------------------- *char %.*s * = \">5<\"  -----------------------\n");

	ret1 = printf("-26->%.*s<\n",5,  str);
	fflush(stdout);
	ret2 = ft_printf("-26->%.*s<\n", 5, str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------------------- *char %*s * = \">5<\" ---------------------------\n");
	ret1 = printf("-27->%*s<\n",5,  str);
	fflush(stdout);
	ret2 = ft_printf("-27->%*s<\n", 5, str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------------------- *char %*s * = \">50<\"---------------------------\n");
	ret1 = printf("-28->%*s<\n",50,  str);
	fflush(stdout);
	ret2 = ft_printf("-28->%*s<\n", 50, str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------------------- *char %*.*s * = \">50, 12<\"---------------------------\n");
	ret1 = printf("-29->%*.*s<\n",50,12,  str);
	fflush(stdout);
	ret2 = ft_printf("-29->%*.*s<\n", 50,12, str);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("--------- *char with nonsence caratctere  \"-\"<-----------\n");

	printf("-30->%s<\n",  str);
	fflush(stdout);
	ft_printf("-30->%#s<\n",  str);
	ft_printf("-30->%+s<\n",  str);
	ft_printf("-30->% s<\n",  str);
	ft_printf("-30->%hhs<\n",  str);
	ft_printf("-30->%lls<\n",  str);
	ft_printf("-30->%hs<\n",  str);
	ft_printf("-30->%s<\n",  str);

	ft_putstr("--------------------- test with int  ---------------------\n");
	ft_putstr("---------------------- symple int  -----------------------\n");

	  ret1 = printf("-1->%d<\n", number);
	fflush(stdout);
	ret2 =ft_printf("-1->%d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("------------------- int with >\"-\"< ---------------------\n");

	  ret1 = printf("-2->%-d<\n", number);
	fflush(stdout);
	ret2 =ft_printf("-2->%-d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------------- int with min_len == 10 ------------------\n");

	   printf("-3->%10d<\n", number);
	fflush(stdout);
	ft_printf("-3->%10d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("--------- int with min_len == 10 and >\"-\"< ------------\n");

	   printf("-4->%-10d<\n", number);
	fflush(stdout);
	ft_printf("-4->%-10d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("--------- int with precision == 10  > len str ------------\n");

	   ret1 = printf("-5->%.10d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-5->%.10d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------- int with precision == 5 < len str -------------\n");

	  ret1 = printf("-6->%.5d<\n",  number);
	fflush(stdout);
	ret2 =ft_printf("-6->%.5d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("----- int with precision == 5 < len stri with >\"-\"< -----\n");

	   ret1 = printf("-7->%-.5d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-7->%-.5d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 10  > len str --\n");

	   ret1 = printf("-8->%10.10d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-8->%10.10d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 1  > len str --\n");

	   ret1 = printf("-9->%10.1d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-9->%10.1d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 2 > len str --\n");

	   ret1 = printf("-10->%10.2d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-10->%10.2d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 3  > len str --\n");

	   ret1 = printf("-11->%10.3d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-11->%10.3d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 4  > len str --\n");

	   ret1 = printf("-12->%10.4d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-12->%10.4d<\n",  number);

	  ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 5  > len str --\n");

	   ret1 = printf("-13->%10.5d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-13->%10.5d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 6  > len str --\n");

	   ret1 = printf("-14->%10.6d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-14->%10.6d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 7  > len str --\n");

	   ret1 = printf("-15->%10.7d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-15->%10.7d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("- int with min_len == 10 > lrn and  precision == 70  > len str -\n");

	   ret1 = printf("-16->%10.70d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-16->%10.70d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 10  > len str -with >\"-\"<-\n");

	   ret1 = printf("-17->%-10.10d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-17->%-10.10d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 1  > len str -with >\"-\"<-\n");

	   ret1 = printf("-18->%-10.1d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-18->%-10.1d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 2 > len str -with >\"-\"<-\n");

	   ret1 = printf("-19->%-10.2d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-19->%-10.2d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 3  > len str -with >\"-\"<-\n");

	   ret1 = printf("-20->%-10.3d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-20->%-10.3d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 4  > len str -with >\"-\"<-\n");

	   ret1 = printf("-21->%-10.4d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-21->%-10.4d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 5  > len str -with >\"-\"<-\n");

	   ret1 = printf("-22->%-10.5d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-22->%-10.5d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 6  > len str -with >\"-\"<-\n");

	   ret1 = printf("-23->%-10.6d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-23->%-10.6d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 7  > len str with >\"-\"<--\n");

	   ret1 = printf("-24->%-10.7d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-24->%-10.7d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("- int with min_len == 10 > lrn and  precision == 70  > len str with >\"-\"<-\n");

	  ret1 = printf("-25->%-10.70d<\n", number);
	fflush(stdout);
	ret2 =ft_printf("-25->%-10.70d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-------------------- int %.*d * = \">5<\"  -----------------------\n");

	   ret1 = printf("-26->%.*d<\n",5,  number);
	fflush(stdout);
	ret2 = ft_printf("-26->%.*d<\n", 5, number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------------------- int %*d * = \">5<\" ---------------------------\n");
	   ret1 = printf("-27->%*d<\n",5,  number);
	fflush(stdout);
	ret2 = ft_printf("-27->%*d<\n", 5, number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------------------- int %*d * = \">50<\"---------------------------\n");
	   ret1 = printf("-28->%*d<\n",50,  number);
	fflush(stdout);
	ret2 = ft_printf("-28->%*d<\n", 50, number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------------------- int %*.*d * = \">50, 12<\"---------------------------\n");
	   ret1 = printf("-29->%*.*d<\n",50,12, number);
	fflush(stdout);
	ret2 = ft_printf("-29->%*.*d<\n", 50,12, number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("$$$$$$$$$$$$$$$$$$$$$$ int with \" \" $$$$$$$$$$$$$$$$$$$$$$$$$\n");

	   ret1 = printf("-30->% d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-30->% d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("------------------- int with >\"-\"< ---------------------\n");

	  ret1 = printf("-31->% -d<\n", number);
	fflush(stdout);
	ret2 =ft_printf("-31->% -d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------------- int with min_len == 10 ------------------\n");

	   printf("-32->% 10d<\n", number);
	fflush(stdout);
	ft_printf("-32->% 10d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("--------- int with min_len == 10 and >\"-\"< ------------\n");

	   printf("-33->% -10d<\n", number);
	fflush(stdout);
	ft_printf("-33->% -10d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("--------- int with precision == 10  > len str ------------\n");

	   ret1 = printf("-34->% .10d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-34->% .10d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");


	ft_putstr("---------- int with precision == 5 < len str -------------\n");

	  ret1 = printf("-35->% .5d<\n",  number);
	fflush(stdout);
	ret2 =ft_printf("-35->% .5d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("----- int with precision == 5 < len stri with >\"-\"< -----\n");

	   ret1 = printf("-36->% -.5d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-36->% -.5d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 10  > len str --\n");

	   ret1 = printf("-37->% 10.10d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-37->% 10.10d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 1  > len str --\n");

	   ret1 = printf("-38->% 10.1d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-38->% 10.1d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 2 > len str --\n");

	   ret1 = printf("-39->% 10.2d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-39->% 10.2d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 3  > len str --\n");

	   ret1 = printf("-40->% 10.3d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-40->% 10.3d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 4  > len str --\n");

	   ret1 = printf("-41->% 10.4d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-41->% 10.4d<\n",  number);

	  ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 5  > len str --\n");

	   ret1 = printf("-42->% 10.5d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-42->% 10.5d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 6  > len str --\n");

	   ret1 = printf("-43->% 10.6d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-43->% 10.6d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 7  > len str --\n");

	   ret1 = printf("-44->% 10.7d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-44->% 10.7d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("- int with min_len == 10 > lrn and  precision == 70  > len str -\n");

	   ret1 = printf("-45->% 10.70d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-45->% 10.70d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 10  > len str -with >\"-\"<-\n");

	   ret1 = printf("-46->% -10.10d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-46->% -10.10d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 1  > len str -with >\"-\"<-\n");

	   ret1 = printf("-47->% -10.1d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-47->% -10.1d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 2 > len str -with >\"-\"<-\n");

	   ret1 = printf("-48->% -10.2d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-48->% -10.2d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 3  > len str -with >\"-\"<-\n");

	   ret1 = printf("-49->% -10.3d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-49->% -10.3d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 4  > len str -with >\"-\"<-\n");

	   ret1 = printf("-50->% -10.4d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-50->% -10.4d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 5  > len str -with >\"-\"<-\n");

	   ret1 = printf("-51->% -10.5d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-51->% -10.5d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 6  > len str -with >\"-\"<-\n");

	   ret1 = printf("-52->% -10.6d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-52->% -10.6d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 7  > len str with >\"-\"<--\n");

	   ret1 = printf("-53->% -10.7d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-53->% -10.7d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("- int with min_len == 10 > lrn and  precision == 70  > len str with >\"-\"<-\n");

	  ret1 = printf("-54->% -10.70d<\n", number);
	fflush(stdout);
	ret2 =ft_printf("-54->% -10.70d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-------------------- int % .*d * = \">5<\"  -----------------------\n");

	   ret1 = printf("-55->% .*d<\n",5,  number);
	fflush(stdout);
	ret2 = ft_printf("-55->% .*d<\n", 5, number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------------------- int % *d * = \">5<\" ---------------------------\n");
	   ret1 = printf("-56->% *d<\n",5,  number);
	fflush(stdout);
	ret2 = ft_printf("-56->% *d<\n", 5, number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------------------- int % *d * = \">50<\"---------------------------\n");
	   ret1 = printf("-57->% *d<\n",50,  number);
	fflush(stdout);
	ret2 = ft_printf("-57->% *d<\n", 50, number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------------------- int % *.*d * = \">50, 12<\"---------------------------\n");
	   ret1 = printf("-58->% *.*d<\n",50,12, number);
	fflush(stdout);
	ret2 = ft_printf("-58->% *.*d<\n", 50,12, number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------------------- int %-*.*d * = \">50, 12<\"---------------------------\n");
	   ret1 = printf("-59->% -*.*d<\n",50,12, number);
	fflush(stdout);
	ret2 = ft_printf("-59->% -*.*d<\n", 50,12, number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");











































/*


	ft_putstr("$$$$$$$$$$$$$$$$$$$$$ int with >\"+\"<$$$$$$$$$$$$$$$$$\n");

	  ret1 = printf("-60->%+d<\n", number);
	fflush(stdout);
	ret2 =ft_printf("-60->%+d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("------------------- int with >\"-\"< ---------------------\n");

	  ret1 = printf("-61->%-+d<\n", number);
	fflush(stdout);
	ret2 =ft_printf("-61->%-+d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------------- int with min_len == 10 ------------------\n");

	  ret1 =  printf("-62->%+10d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-62->%+10d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("--------- int with min_len == 10 and >\"-\"< ------------\n");

	   ret1 = printf("-4->%+-10d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-4->%+-10d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("--------- int with precision == 10  > len str ------------\n");

	   ret1 = printf("-5->%+.10d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-5->%+.10d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------- int with precision == 5 < len str -------------\n");

	  ret1 = printf("-6->%+.5d<\n",  number);
	fflush(stdout);
	ret2 =ft_printf("-6->%+.5d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("----- int with precision == 5 < len stri with >\"-\"< -----\n");

	   ret1 = printf("-7->%+-.5d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-7->%+-.5d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 10  > len str --\n");

	   ret1 = printf("-8->%+10.10d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-8->%+10.10d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 1  > len str --\n");

	   ret1 = printf("-9->%+10.1d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-9->%+10.1d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 2 > len str --\n");

	   ret1 = printf("-10->%+10.2d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-10->%+10.2d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 3  > len str --\n");

	   ret1 = printf("-11->%+10.3d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-11->%+10.3d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 4  > len str --\n");

	   ret1 = printf("-12->%+10.4d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-12->%+10.4d<\n",  number);

	  ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 5  > len str --\n");

	   ret1 = printf("-13->%+10.5d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-13->%+10.5d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 6  > len str --\n");

	   ret1 = printf("-14->%+10.6d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-14->%+10.6d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 7  > len str --\n");

	   ret1 = printf("-15->%+10.7d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-15->%+10.7d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("- int with min_len == 10 > lrn and  precision == 70  > len str -\n");

	   ret1 = printf("-16->%+10.70d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-16->%+10.70d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 10  > len str -with >\"-\"<-\n");

	   ret1 = printf("-17->%-+10.10d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-17->%-+10.10d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 1  > len str -with >\"-\"<-\n");

	   ret1 = printf("-18->%-+10.1d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-18->%-+10.1d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 2 > len str -with >\"-\"<-\n");

	   ret1 = printf("-19->%-+10.2d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-19->%-+10.2d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 3  > len str -with >\"-\"<-\n");

	   ret1 = printf("-20->%-+10.3d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-20->%-+10.3d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 4  > len str -with >\"-\"<-\n");

	   ret1 = printf("-21->%-+10.4d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-21->%-+10.4d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 5  > len str -with >\"-\"<-\n");

	   ret1 = printf("-22->%-+10.5d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-22->%-+10.5d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 6  > len str -with >\"-\"<-\n");

	   ret1 = printf("-23->%-+10.6d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-23->%-+10.6d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-- int with min_len == 10 > lrn and  precision == 7  > len str with >\"-\"<--\n");

	   ret1 = printf("-24->%-+10.7d<\n",  number);
	fflush(stdout);
	ret2 = ft_printf("-24->%-+10.7d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("- int with min_len == 10 > lrn and  precision == 70  > len str with >\"-\"<-\n");

	  ret1 = printf("-25->%-+10.70d<\n", number);
	fflush(stdout);
	ret2 =ft_printf("-25->%-+10.70d<\n", number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("-------------------- int %.*d * = \">5<\"  -----------------------\n");

	   ret1 = printf("-26->%+.*d<\n",5,  number);
	fflush(stdout);
	ret2 = ft_printf("-26->%+.*d<\n", 5, number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------------------- int %*d * = \">5<\" ---------------------------\n");
	   ret1 = printf("-27->%+*d<\n",5,  number);
	fflush(stdout);
	ret2 = ft_printf("-27->%+*d<\n", 5, number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------------------- int %*d * = \">50<\"---------------------------\n");
	   ret1 = printf("-28->%+*d<\n",50,  number);
	fflush(stdout);
	ret2 = ft_printf("-28->%+*d<\n", 50, number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("---------------------- int %*.*d * = \">50, 12<\"---------------------------\n");
	   ret1 = printf("-29->%+*.*d<\n",50,12, number);
	fflush(stdout);
	ret2 = ft_printf("-29->%+*.*d<\n", 50,12, number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ft_putstr("$$$$$$$$$$$$$$$$$$$$$$ int with \" \" $$$$$$$$$$$$$$$$$$$$$$$$$\n");

	   ret1 = printf("-30->%+d<\n", number);
	fflush(stdout);
	ret2 = ft_printf("-30->%+ d<\n",  number);

	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 =ft_printf("-31->% +-d<\n", number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ft_printf("-32->% +10d<\n", number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ft_printf("-33->% +-10d<\n", number);
	ft_putstr("ret 1 = ");
	ft_putnbr(ret1);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-34->%+ .10d<\n",  number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

	ret2 =ft_printf("-35->% +.5d<\n",  number);

	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-36->%+ -.5d<\n", number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-37->% +10.10d<\n",  number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-38->% +10.1d<\n", number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-39->% +10.2d<\n", number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-40->% +10.3d<\n",  number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-41->% +10.4d<\n",  number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-42->% +10.5d<\n", number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-43->% +10.6d<\n", number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-44->% +10.7d<\n", number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-45->% +10.70d<\n", number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-46->% -+10.10d<\n", number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-47->% -+10.1d<\n",  number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-48->% -+10.2d<\n",  number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-49->% -+10.3d<\n",  number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-50->% -+10.4d<\n", number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-51->% +-10.5d<\n",  number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-52->% +-10.6d<\n", number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-53->% +-10.7d<\n",  number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 =ft_printf("-54->% -+10.70d<\n", number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-55->% +.*d<\n", 5, number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-56->% +*d<\n", 5, number);

	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-57->% +*d<\n", 50, number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-58->% +*.*d<\n", 50,12, number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");
	ret2 = ft_printf("-59->% +-*.*d<\n", 50,12, number);
	ft_putstr("\tret 2 = ");
	ft_putnbr(ret2);
	ft_putstr("\n");

*/

/*
	ft_putstr("--------- int other tests <-----------\n");

	   printf("-30->%d<\n", number);
	fflush(stdout);
	ft_printf("-30->%#d<\n",  number);
	ft_printf("-30->%+d<\n",  number);
	ft_printf("-30->% d<\n",  number);
	ft_printf("-30->%hhd<\n", number);
	ft_printf("-30->%lld<\n", number);
	ft_printf("-30->%hd<\n", number);
	ft_printf("-30->%d<\n", number);
*/
ft_putstr("************************* end *************************\n");
	return (0);
}
