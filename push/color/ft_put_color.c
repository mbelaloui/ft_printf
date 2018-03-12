# include "ft_color.h"

int		is_there_color(const char *s1, const char *s2, size_t n)
{
	size_t		pt;

	pt = 0;
	while (s2[pt] || pt < n)
	{
		if (ft_toupper(s1[pt]) == s2[pt])
			pt++;
		else
			return (0);
	}
	return (1);
}

int	ft_put_color(char *str, int pt)
{
	void (*put_colors[8])();
	char *colors[8];
	int index;
	int res;

	ft_gettabcolor(put_colors);
	ft_inittabcolor(colors);
	str++;
	 pt--;
	index = 0;
	while (index < 8)
	{
/*		ft_putstr("str ");
		ft_putstr(str);
		ft_putstr("\t");

		ft_putstr("pt = ");
		ft_putnbr(pt);
		ft_putstr("\t");
*/		if (is_there_color(str,colors[index], pt))
		{		
			(put_colors[index])();
			return (1);
		}
		index++;			
	}
	return (0);
}
