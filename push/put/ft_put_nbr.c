/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 02:58:43 by mbelalou          #+#    #+#             */
/*   Updated: 2018/03/02 18:09:44 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/** voir pour le %f si c'est bien d'enlever le static ici **/

static void	put_nbr(intmax_t nbr)
{
	if (nbr / 10)
		put_nbr(nbr / 10);
	ft_put_buf((nbr % 10) + '0', PUT_CHAR);
}

static int	manage_nbr_shift(intmax_t nbr, t_format *frmt, int shift)
{
	char	c;
	int		pt;

	pt = ((frmt->flags.plus) || nbr < 0) ? 1 : 0;
	c = (frmt->flags.zero) ? '0' : ' ';
	if ((frmt->flags.space && nbr >= 0) ||
			(frmt->min_length == 1 && frmt->precision == 0 &&
		nbr == 0 && !frmt->flags.plus))
	{
		ft_put_buf(' ', PUT_CHAR);
		pt++;
		shift--;
	}
	while (!frmt->flags.dash && shift > 0)
	{
		ft_put_buf(c, PUT_CHAR);
		shift--;
		pt++;
	}
	if (frmt->precision == 0 && nbr == 0 && frmt->min_length > 1 &&
			!frmt->flags.plus)
		ft_put_buf(' ', PUT_CHAR);
	return (pt);
}

static int	put_zero(t_format *format, intmax_t nbr)
{
	int		nbr_0;
	int		ret_nbr_put;

	nbr_0 = (format->precision - format->len_temp);
	nbr_0 = (nbr_0 > 0) ? nbr_0 : 0;
/*********************************************************************/
	// faire passer %d, %D

	if (format->flags.plus && nbr >= 0)
		ft_put_buf('+', PUT_CHAR);
	if (nbr < 0)
		ft_put_buf('-', PUT_CHAR);
/*********************************************************************/

/*********************************************************************/
	// faire passer %o, %O
	
	
/*********************************************************************/

/*********************************************************************/
	// faire passer %u, %U
	
	
/*********************************************************************/


/*********************************************************************/
	// faire passer %x, %X
	
	
/*********************************************************************/


	ret_nbr_put = nbr_0;
	while (nbr_0)
	{
		ft_put_buf('0', PUT_CHAR);
		nbr_0--;
	}
	return (ret_nbr_put);
}

void		put_min_intmax()
{
	char *nbr_minint;
	
	nbr_minint = "9223372036854775808";
	ft_put_str(nbr_minint, 19);
}

void		ft_put_nbr(intmax_t nbr, t_format *format, int shift, int size_ret)
{
	int		pt;

	if (nbr == 0 && format->precision == 0 && format->flags.plus &&
			format->min_length > 1 && !format->flags.dash)
		ft_put_buf(' ', PUT_CHAR);
	if (nbr == 0 && format->precision == 0 && format->flags.plus &&
			format->min_length > 1 && format->flags.dash)
		size_ret++;
	pt = manage_nbr_shift(nbr, format, shift);
	pt += put_zero(format, nbr);
	if (nbr < 0)
		nbr = -nbr;
	if (!(format->precision == 0 && nbr == 0))
	{	if (nbr < MIN_INTMAX)
			put_min_intmax();
		else
			put_nbr(nbr);
	}
/*********************************************************************/
	// faire passer %d, %D, %o, %O, %u, %U, %x, %X
	while (pt + format->len_temp < size_ret)
	{
		ft_put_buf(' ', PUT_CHAR);
		pt++;
	}
/*********************************************************************/

}
