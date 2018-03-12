# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 21:48:22 by mbelalou          #+#    #+#              #
#    Updated: 2018/03/12 18:30:44 by mbelalou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

FLAGES	=	-c -Wall -Wextra -Werror

SRCS	=	*.c\
			color/*.c\
			../../libft/*.c

BIN		=	*.o\

#$(SRCS:.c=.o)

all		:	$(NAME)

$(NAME)	:	$(SRCS) ft_printf.h
			@gcc -c $(SRCS)
			@ar rc $(NAME) $(BIN)
#			@gcc $(FLAGES) $(SRCS) -I.
#			@ar rc $(NAME) $(BIN)
#			@ranlib $(NAME) 
			@@echo compilation complited successfully !

clean	:
			@rm -fr $(BIN)
			@echo cleaned all the .o

fclean	:	clean
			@rm -f $(NAME)
			@echo cleaned the .a file.
			@echo the directory is totaly cleaned

re		:	fclean all
