/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_V1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 12:20:56 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/12 20:16:46 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push/ft_printf.h"
#include <math.h>


int		main()
{
/*	char	*str = "%lc";
	int		data = 1286;
	int		data = 123456;

	int ch;

	char tab[20];
	int fd = -100;

	ft_bzero(tab, sizeof(tab));

	if (isfinite(fd/0))
		ft_putstr("ok");
	else
		ft_putstr("ko");

	printf("%+ jd\n", MAX_INT *4);
	fflush(stdout);
	ft_printf("%+ jd\n", MAX_INT*4);
	ft_printf("%+ d\n", MIN_INT);
	ft_printf("%+ d\n", 0);
	printf("%+ d\n", 0);
	fflush(stdout);
	ft_printf("%+ d\n", 42);
	ft_printf("%+ d\n", -42);

	printf("%+ 20jd\n", MAX_INT *4);
	fflush(stdout);
	ft_printf("%+ 20jd\n", MAX_INT*4);
	ft_printf("%+ 20d\n", MIN_INT);
	ft_printf("%+ 20d\n", 0);
	printf("%+ 20d\n", 0);
	fflush(stdout);
	ft_printf("%+ 20d\n", 42);
	ft_printf("%+ 20d\n", -42);
	
	printf("%+ .0jd\n", MAX_INT *4);
	fflush(stdout);
	ft_printf("%+ .0jd\n", MAX_INT*4);
	ft_printf("%+ .0d\n", MIN_INT);
	ft_printf("%+ .0d\n", 0);
	printf("%+ .0d\n", 0);
	fflush(stdout);
	ft_printf("%+ .0d\n", 42);
	ft_printf("%+ .0d\n", -42);
	

	printf("%+ .20jd\n", MAX_INT *4);
	fflush(stdout);
	ft_printf("%+ .20jd\n", MAX_INT*4);
	ft_printf("%+ .20d\n", MIN_INT);
	ft_printf("%+ .20d\n", 0);
	printf("%+ .20d\n", 0);
	fflush(stdout);
	ft_printf("%+ .20d\n", 42);
	ft_printf("%+ .20d\n", -42);
	
	printf("%+ 30.0jd\n", MAX_INT *4);
	fflush(stdout);
	ft_printf("%+ 30.0jd\n", MAX_INT*4);
	ft_printf("%+ 30.0d\n", MIN_INT);
	ft_printf("%+ 30.0d\n", 42);
	ft_printf("%+ 30.0d\n", -42);

	ft_printf("%0 .d\n", 0);
	   printf("%0 .d\n", 0);
	fflush(stdout);
	
	ft_printf("%0 1.d\n", 0);
	   printf("%0 1.d\n", 0);
	fflush(stdout);
	
	ft_printf("%0 2.d\n", 0);
	   printf("%0 2.d\n", 0);
	fflush(stdout);
	
	ft_printf("%0 3.d\n", 0);
	   printf("%0 3.d\n", 0);
	fflush(stdout);
	

	%'+-0 *.*jd	


	ft_printf("%'+-0 5.0jd\n",0, 5,0,0);
	   printf("%'+-0 5.0jd\n",0, 5,0,0);
	fflush(stdout);

	ft_printf("%03.2d\n",0, 5,0,0);
	   printf("%03.2d\n",0, 5,0,0);
	fflush(stdout);
	
	ft_printf("%1.0d\n",0, 5,0,0);
	   printf("%1.0d\n",0, 5,0,0);
	fflush(stdout);



	   printf("-%-+.l 0hhhhhhhhhhhhh s-\n", "bonjour");
	fflush(stdout);
	ft_printf("-%-+.l 0hhhhhhhhhhhhh s-\n", "bonjour");
	   printf("%%\n");
	fflush(stdout);
	ft_printf("%%\n");
	   printf("% 3   %\n");
	ft_printf("%  3  %\n");
	fflush(stdout);


	int val = MIN_INT;

	ft_printf("%o\n", val);
	   printf("%o\n", val);



	ft_printf("%+*.*o\n",0, 0,val);
	   printf("%+*.*o\n",0, 0,val);
	fflush(stdout);
	ft_printf("%+*.*o\n",1, 0,val);
	   printf("%+*.*o\n",1, 0,val);
	fflush(stdout);
	ft_printf("%+*.*o\n",2, 0,val);
	   printf("%+*.*o\n",2, 0,val);
	fflush(stdout);
	ft_printf("%+*.*o\n",3, 0,val);
	   printf("%+*.*o\n",3, 0,val);
	fflush(stdout);
	ft_printf("%+0*.*o\n",6, 0,val);
	   printf("%+0*.*o\n",6, 0,val);
	fflush(stdout);

	ft_printf("%x\n", val);
	   printf("%x\n", val);



	ft_printf("%+*.*x\n",0, 0,val);
	   printf("%+*.*x\n",0, 0,val);
	fflush(stdout);
	ft_printf("%+*.*x\n",1, 0,val);
	   printf("%+*.*x\n",1, 0,val);
	fflush(stdout);
	ft_printf("%+*.*x\n",2, 0,val);
	   printf("%+*.*x\n",2, 0,val);
	fflush(stdout);
	ft_printf("%+*.*x\n",3, 0,val);
	   printf("%+*.*x\n",3, 0,val);
	fflush(stdout);
	ft_printf("%+0*.*x\n",6, 0,val);
	   printf("%+0*.*x\n",6, 0,val);
	fflush(stdout);



	ft_printf("%o\n",12);
	   printf("%o\n",12);



	ft_printf("%+*.*o\n",0, 0,12);
	   printf("%+*.*o\n",0, 0,12);
	fflush(stdout);
	ft_printf("%+*.*o\n",1, 0,12);
	   printf("%+*.*o\n",1, 0,12);
	fflush(stdout);
	ft_printf("%+*.*o\n",2, 0,12);
	   printf("%+*.*o\n",2, 0,12);
	fflush(stdout);
	ft_printf("%+*.*o\n",3, 0,12);
	   printf("%+*.*o\n",3, 0,12);
	fflush(stdout);
	ft_printf("%+*.*o\n",6, 0,12);
	   printf("%+*.*o\n",6, 0,12);
	fflush(stdout);



	//ft_putnbr(9223372036854775807);

	(ft_printf("1-%        -\n"));
	   (printf("2-%        -\n"));

	ft_printf("\n-------------------\n");

	ft_putnbr(ft_printf("+%  h+\n",6, 0,12));
	   ft_putnbr(printf("+%  h+\n",6, 0,12));


	ft_printf("\n|#        '# + - 0 15 L d'        : _%#0+---hh--hhh-++++++0015d_\n", MAX_INT);
	   printf("|#        '# + - 0 15 L d'        : _%#0+---hh--hhh-++++++0015d_\n", MAX_INT);
	fflush(stdout);
*/
//	char *format = " {BLU}sahit farou9  nom : {GREEN}%s{EOC} premom : {RED}%s{EOC}\n";
	char *format = "\nnom : {green}%s{eoc} premom : {red}%s{eoc}\n";
//	char *format = "nom : green}%s{eoc} premom : {red}%s{eoc\n";
//	char *format = "nom : {green}%s{ec} premom : {red}%s{eoc\n";
//	char *format = "nom : {green}%s{ec} premom : {red%s{eoc\n";
//	char *format = "nom : {green}%s{Eoc} premom : {red}%s{eoc}\n";
//	char *format = "nom : {green}%s{eoc} premom : {red%s{eoc}\n";
//	char *format = "nom : {grEEn}%s{eOc} premom : {REd}%s{eoc}\n";
	char *name1 ="belaloui";
	char *name2 ="mehdi";

	char tab[65];
	ft_bzero(tab, sizeof(tab));
	ft_memset(tab, ' ', 64);
	
/*	ft_memset();
ft_decimal_to_base_stat(char *tab_ret, const intmax_t nbr,
		const int base, const int form)
*/
	// ft_putnbr(ft_get_len_value_base(9223372036854775808, 2));
ft_putstr("/***********************/\n");
ft_putstr(ft_decimal_to_base_dynm(54775807, 2, 1));
ft_putstr("\n/***********************/\n");
ft_decimal_to_base_stat(tab,-54775807, 2, 1);
ft_putstr("/***********************/\n");
ft_putstr(tab);
ft_putstr("\n/***********************/\n");

//	ft_printf(format, name1, name2);
//ft_decimal_to_base_stat(char *tab_ret, const intmax_t nbr, const int base, const int form)	
//ft_putnbr(ft_nbrlen(9223372036854775807));

//	ft_printf("%jd\n", -9223372036854775808);
	

	/*	printf("%");
	printf("%");
	printf("%");
	printf("%");
	printf("%");
	printf("%");
	printf("%");
	data = -3;
	while (data <= 270)
	{
		ft_putnbr(data);
		ft_putstr("\n");
		ft_putstr("printf \t\t>");
		printf(str, data);
		fflush(stdout);
		ft_putstr("<\nftprintf \t>");
		ft_printf(str, data);
		ft_putstr("<\n\n");
		data++;
		if (data== 10)
			data = 120;
		if (data == 130)
			data = 250;
//		ft_temporize(1);
	}


	str = "%c";
	data = -3;
	while (data <= 270)
	{
		ft_putnbr(data);
		ft_putstr("\n");
		ft_putstr("printf \t\t>");
		printf(str, data);
		fflush(stdout);
		ft_putstr("<\nftprintf \t>");
		ft_printf(str, data);
		ft_putstr("<\n\n");
		data++;
		if (data== 10)
			data = 120;
		if (data == 130)
			data = 250;
//		ft_temporize(1);
	}*/
	return (0);
}
