# include "ft_color.h"

void	ft_setgreen()
{
	char *str;
	int pt;

	pt = -1;
	str = "\x1B[32m";
	while (str[++pt])
		ft_put_buf(str[pt], ING);
}
