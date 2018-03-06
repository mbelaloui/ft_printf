# include "ft_color.h"


void	ft_setmagenta()
{
	char	*str;
	int		pt;

	pt = -1;
	str = "\x1B[35m";
	while (str[++pt])
		ft_put_buf(str[pt], ING);
}
