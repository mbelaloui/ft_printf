# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 21:48:22 by mbelalou          #+#    #+#              #
#    Updated: 2018/04/22 02:54:56 by mbelalou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

FLAGES	=	 -Wall -Wextra -Werror -c

DIR_COLOR	= color
SRC_COLOR = ft_inittabcolor.c ft_setcyan.c ft_setred.c ft_get_color.c\
			ft_put_color.c ft_setgreen.c ft_setwhite.c ft_gettabcolor.c\
			ft_setblue.c ft_setmagenta.c ft_setyellow.c
SRCS_COLOR = $(addprefix $(DIR_COLOR)/, $(SRC_COLOR))

DIR_FORMAT = format
SRC_FORMAT = ft_format_init.c ft_put_flags.c ft_put_convertion.c\
			 ft_put_format.c
SRCS_FORMAT = $(addprefix $(DIR_FORMAT)/, $(SRC_FORMAT))

DIR_PARSING = parsing
SRC_PARSING = ft_get_parssing_format.c ft_put_param.c\
			  ft_is_conversion_type.c ft_switsh_type.c ft_get_min_len.c
SRCS_PARSING = $(addprefix $(DIR_PARSING)/, $(SRC_PARSING))

DIR_PUT = put
SRC_PUT = ft_fill_buf.c ft_put_nbr.c ft_put_str.c ft_put_unbr.c
SRCS_PUT = $(addprefix $(DIR_PUT)/, $(SRC_PUT))

DIR_CONV_TYPE = type_convertion
SRC_CONV_TYPE = ft_convert_char.c ft_convert_string.c ft_convert_wstring.c\
				ft_convert_nbr.c ft_convert_wchar.c ft_get_convertion_size.c\
				ft_convert_nbr_base.c ft_convert_nbr_uns.c ft_convert_pointer.c\
				ft_get_uconvertion_size.c 
SRCS_CONV_TYPE = $(addprefix $(DIR_CONV_TYPE)/, $(SRC_CONV_TYPE))

INC_DIR		= inc/

OBJS_DIR	= objects/

LIBFT_DIR	= libft/

SRC_PRINTF	= ft_printf.c

SRC			= $(SRCS_PUT) $(SRC_PRINTF) $(SRCS_COLOR) $(SRCS_FORMAT)\
			  $(SRCS_PARSING) $(SRCS_CONV_TYPE)

OBJ		= 	$(addprefix $(OBJS_DIR), $(SRC:.c=.o))

all		:	$(LIBFT) $(NAME) $(INC_DIR)

$(NAME)	: $(OBJS_DIR)  $(SRC) $(OBJ) $(INC_DIR)
	@printf "\x1B[A\x1B[K";
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJ)
	@@echo the compilation of libftprintf wase complited successfully !

$(OBJS_DIR)%.o : %.c
	@printf "\x1B[ACreate $@ src with $<...\x1B[K\n";
	@gcc $(FLAGES) $< -o $@ -I $(INC_DIR) 

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR); 
	@mkdir -p $(OBJS_DIR)/$(DIR_COLOR); 
	@mkdir -p $(OBJS_DIR)/$(DIR_FORMAT); 
	@mkdir -p $(OBJS_DIR)/$(DIR_PARSING); 
	@mkdir -p $(OBJS_DIR)/$(DIR_PUT); 
	@mkdir -p $(OBJS_DIR)/$(DIR_CONV_TYPE); 

clean	:
	@make -C $(LIBFT_DIR) clean
	@rm -fr $(OBJS_DIR)

fclean	:	clean
	@make -C $(LIBFT_DIR) fclean
	@rm -f $(NAME)
	@echo cleaned the $(NAME) file.
	@echo the directory is totaly cleaned

re		:	fclean all

