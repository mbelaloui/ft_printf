# include "ft_color.h"

int		ft_get_color(char *str)
{
	int pt;
	int end_pt;

	pt = 1;
	while (str[pt] && (str[pt] != '}' && str[pt] != '%' && str[pt] != '{'))
		pt++;
	if(str[pt] == '}')
		pt++;
	else
	{
		ft_put_buf(*str, PUT_CHAR);
		return (1);
	}
	end_pt = pt;
	pt = ft_put_color(str, pt - 1);
	if(!pt)
	{
		ft_put_buf(*str, PUT_CHAR);
		return (1);
	}
	return (end_pt);
}
