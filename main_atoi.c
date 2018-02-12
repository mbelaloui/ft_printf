/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 11:25:21 by mbelalou          #+#    #+#             */
/*   Updated: 2018/01/19 13:02:36 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/libft/libft.h"

int		main(int argc, char **argv)
{
//	char i = 0;
//	while (i != '\e')
//	ft_putchar('\e');
//ft_putchar('>');
	ft_putchar('\n');
	if (argc < 2)
		return (0);

	ft_putstr("------------------\t ft_atoi \t---------------------\n");
	argc = 1;

	while (argv[argc])
	{
		ft_putstr("param numero -");
		ft_putnbr(argc);
		ft_putstr("- : \t str : <");
		ft_putstr(argv[argc]);
		ft_putstr(">  \t -> result \t ");
		ft_putnbr(ft_atoi(argv[argc]));
		argc++;
		ft_putstr("\n");
	}

	ft_putstr("------------------\t ft_atoi_v2 \t---------------------\n");
	argc = 1;

	while (argv[argc])
	{
		ft_putstr("param numero -");
		ft_putnbr(argc);
		ft_putstr("- : \t str : <");
		ft_putstr(argv[argc]);
		ft_putstr(">  \t -> result \t ");
		ft_putnbr(ft_atoi_v2(argv[argc]));
		argc++;
		ft_putstr("\n");
	}

	ft_putstr("------------------\t ft_atoi_base \t---------------------\n");
	argc = 1;

	while (argv[argc])
	{
		ft_putstr("param numero -");
		ft_putnbr(argc);
		ft_putstr("- : \t str : <");
		ft_putstr(argv[argc]);
		ft_putstr(">  \t -> result \t ");
		ft_putnbr(ft_atoi_base((argv[argc]), 10));
		argc++;
		ft_putstr("\n");
	}

	ft_putstr("------------------\t ft_atoi_base_v2 \t---------------------\n");
	argc = 1;

	while (argv[argc])
	{
		ft_putstr("param numero -");
		ft_putnbr(argc);
		ft_putstr("- : \t str : <");
		ft_putstr(argv[argc]);
		ft_putstr(">  \t -> result \t ");
		ft_putnbr(ft_atoi_base_v2(argv[argc], 10));
		argc++;
		ft_putstr("\n");
	}
/*
	ft_putstr("------------------\t ft_strlower \t---------------------\n");
	argc = 0;

	while (argv[argc])
	{
		ft_putstr("param numero -");
		ft_putnbr(argc);
		ft_putstr("- : \t str : <");
		ft_putstr(argv[argc]);
		ft_putstr(">  \t -> result \t ");
		ft_putstr(ft_strlower(argv[argc]));
		argc++;
		ft_putstr("\n");
	}

	ft_putstr("------------------\t ft_strupper \t---------------------\n");
	argc = 0;

	while (argv[argc])
	{
		ft_putstr("param numero -");
		ft_putnbr(argc);
		ft_putstr("- : \t str : <");
		ft_putstr(argv[argc]);
		ft_putstr(">  \t -> result \t ");
		ft_putstr(ft_strupper(argv[argc]));
		argc++;
		ft_putstr("\n");
	}
*/
	return (0);
}
