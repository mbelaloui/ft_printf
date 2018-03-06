# include "../ft_printf.h"


void 	*ft_gettabcolor(void (*put_colors[8])());
void	ft_setblue();
void	ft_setcyan();
void	ft_setgreen();
void	ft_setmagenta();
void	ft_setred();
void	ft_setwhite();
void	ft_setyellow();
char	*ft_inittabcolor();
int		ft_put_color(char *str, int pt);
int		ft_get_color(char *str);
