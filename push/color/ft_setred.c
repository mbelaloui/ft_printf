# include "ft_color.h"

void	ft_setred()
{
	char *str;
	int pt;

	pt = -1;
	str = "\x1B[31m";
	while (str[++pt])
		ft_put_buf(str[pt], ING);
}
