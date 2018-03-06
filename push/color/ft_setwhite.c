# include "ft_color.h"

void	ft_setwhite()
{
	char *str;
	int pt;

	pt = -1;
	str = "\x1B[0m";
	while (str[++pt])
		ft_put_buf(str[pt], ING);
}
