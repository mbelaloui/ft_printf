# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 21:48:22 by mbelalou          #+#    #+#              #
#    Updated: 2018/01/29 17:25:55 by mbelalou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

FLAGES	=	-c -Wall -Wextra -Werror

SRCS	=	ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memccpy.c\
			ft_memmove.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strlen.c\
			ft_strdup.c\
			ft_strcpy.c\
			ft_strncpy.c\
			ft_strcat.c\
			ft_strncat.c\
			ft_strlcat.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strstr.c\
			ft_strnstr.c\
			ft_strcmp.c\
			ft_strncmp.c\
			ft_atoi.c\
			ft_atoi_base.c\
			ft_atoi_v2.c\
			ft_atoi_base_v2.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_memalloc.c\
			ft_memdel.c\
			ft_strnew.c\
			ft_strdel.c\
			ft_strclr.c\
			ft_striter.c\
			ft_striteri.c\
			ft_strmap.c\
			ft_strmapi.c\
			ft_strequ.c\
			ft_strnequ.c\
			ft_strsub.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_strsplit.c\
			ft_itoa.c\
			ft_strlower.c\
			ft_strupper.c\
			ft_putchar.c\
			ft_putstr.c\
			ft_putendl.c\
			ft_putnbr.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_lstnew.c\
			ft_lstdelone.c\
			ft_lstdel.c\
			ft_lstadd.c\
			ft_lstiter.c\
			ft_lstmap.c\
			ft_isblank.c\
			ft_islower.c\
			ft_isupper.c\
			ft_isempty.c\
			ft_intochar.c\
			ft_chartoint.c\
			ft_nbrlen.c\
			ft_comptword.c\
			ft_getword.c\
			ft_strcut.c\
			ft_max.c\
			ft_min.c\
			ft_putmat.c\
			ft_matlen.c\
			ft_abs.c\
			ft_getlenword.c\
			ft_getfirstindexword.c\
			ft_free_map.c\
			ft_open_file.c\
			ft_is_c_in_str.c\
			ft_strnew_empty.c\
			ft_temporize.c\

BIN		=	$(SRCS:.c=.o)

all		:	$(NAME)

$(NAME)	:	$(SRCS) libft.h
			@gcc $(FLAGES) $(SRCS) -I.
			@ar rc $(NAME) $(BIN)
			@ranlib $(NAME) 
			@@echo compilation complited successfully !

clean	:
			@rm -fr $(BIN)
			@echo cleaned all the .o

fclean	:	clean
			@rm -f $(NAME)
			@echo cleaned the .a file.
			@echo the directory is totaly cleaned

re		:	fclean all
