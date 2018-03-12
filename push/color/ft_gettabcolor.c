
# include "ft_color.h"

void 	*ft_gettabcolor(void (*put_colors[8])())
{
	put_colors[0] = &ft_setblue;
	put_colors[1] = &ft_setcyan;
	put_colors[2] = &ft_setwhite;
	put_colors[3] = &ft_setgreen;
	put_colors[4] = &ft_setmagenta;
	put_colors[5] = &ft_setred;
	put_colors[6] = &ft_setwhite;
	put_colors[7] = &ft_setyellow;

	return (put_colors);
}
