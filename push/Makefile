# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 21:48:22 by mbelalou          #+#    #+#              #
#    Updated: 2018/02/15 19:15:01 by mbelalou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

FLAGES	=	-c -Wall -Wextra -Werror

SRCS	=	ft_convert_char.c\
			ft_convert_decimal.c\
			ft_convert_string.c\
			ft_format_init.c\
			ft_get_parssing.c\
			ft_is_conversion_type.c\
			ft_printf.c\
			ft_put_flags.c\
			ft_put_format.c\
			ft_put_nbr.c\
			ft_put_param.c\
			./../../Project/libft/*.c

BIN		=	$(SRCS:.c=.o)

all		:	$(NAME)

$(NAME)	:	$(SRCS) ft_printf.h
			@make -C ../../Project/libft/
			@ar rc tmp.a $(BIN)
			@libtool -static -o $(NAME) tmp.a ../../Project/libft/libft.a
			@rm -f tmp.a
#			@gcc $(FLAGES) $(SRCS) -I.
#			@ar rc $(NAME) $(BIN)
#			@ranlib $(NAME) 
#			@@echo compilation complited successfully !

clean	:
			@rm -fr $(BIN)
			@echo cleaned all the .o

fclean	:	clean
			@rm -f $(NAME)
			@echo cleaned the .a file.
			@echo the directory is totaly cleaned

re		:	fclean all
