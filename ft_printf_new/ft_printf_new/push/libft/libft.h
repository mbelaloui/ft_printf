/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:52:06 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/08 21:14:17 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

#define DONT_CLEAN	0
#define CLEAN_FIRST	1
#define CLEAN_LAST	2
#define CLEAN_BOTH	3

#define WHITE		"\x1B[0m"
#define RED			"\x1B[31m"
#define GREEN		"\x1B[32m"
#define YELLOW		"\x1B[33m"
#define BLUE		"\x1B[34m"
#define MAGENTA		"\x1B[35m"
#define CYAN		"\x1B[36m"

#define MAX_INT		2147483647
#define MIN_INT		-2147483648

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *str, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *str1, const void *str2, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dest, const char *src, size_t destsize);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *ha, const char *ne);
char				*ft_strnstr(const char *ha, const char *ne, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

int					ft_atoi(const char *str);
int					ft_atoi_v2(const char *str);
int					ft_atoi_base(const char *str, int str_base);
int					ft_atoi_base_v2(const char *str, int str_base);

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strsub(const char *s, unsigned int start, size_t len);

char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strjoin_clean(const char *s1, const char *s2, int opt);

char				*ft_strtrim(const char *s);
char				**ft_strsplit(const char *str, char c);
char				*ft_itoa(int nbr);
char				*ft_strlower(const char *str);
char				*ft_strupper(const char *str);

void				ft_putchar(char c);
void				ft_putstr(const char *str);
void				ft_putendl(const char *str);
void				ft_putnbr(int nb);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstnew(const void *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *news);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

int					ft_islower(int c);
int					ft_isupper(int c);
int					ft_isblank(char c);
int					ft_isempty(const char *str);
char				ft_intochar(int nbr);
int					ft_chartoint(char c);
size_t				ft_nbrlen(long long nb);
size_t				ft_comptword(const char *str, const char c);
char				*ft_getword(const char *s, const int idword, const char c);
char				*ft_strcut(const char *src, const size_t d, const size_t f);
int					ft_min(const int a, const int b);
int					ft_max(const int a, const int b);
void				ft_putmat(char **mat);
size_t				ft_matlen(char **mat);
int					ft_abs(const int nbr);
int					ft_getfirstindexword(const char *str, const int idword,
		const char c);
size_t				ft_getlenword(const char *str, const int index,
		const char c);

void				ft_free_map(char ***map);
int					ft_open_file(char *url_file);

int					ft_is_c_in_str(char c, char *str);

char				*ft_strnew_empty(size_t size);
void				ft_temporize(size_t sycl);

#endif
