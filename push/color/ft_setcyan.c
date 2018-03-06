# include "ft_color.h"

void	ft_setcyan()
{
	char *str;
	int pt;

	pt = -1;
	str = "\x1B[36m";
	while (str[++pt])
		ft_put_buf(str[pt], ING);
}
