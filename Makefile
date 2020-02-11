# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zael-mab <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/19 13:58:06 by zael-mab          #+#    #+#              #
#    Updated: 2020/02/08 16:15:12 by zael-mab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a

SRC_PATH= .
SRC_NAME=	popac.c\
		stdarg0.c\
		bo.c\
		dioux0.c\
		dioux1.c\
		lolot.c\
		ft_strnnn.c\
		opert.c\
		opert2.c\
		f_loat0.c\
		f_loat1.c\
		dioux1.c\
		dioux1p.c\
		xxp.c\
		xxp0.c\


SRC= $(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ_PATH= obj
OBJ_NAME= $(SRC_NAME:.c=.o)
OBJ= $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

LIB_OBJ_PATH= libft/obj/*.o

LIB_PATH= libft
LIB= libft.a

CC=	gcc
CFLAGES= -Wall -Wextra -Werror

LD_FLAGS= -L$(LIB_PATH)
LD_LIBS= -l$(patsubst lib%.a,%, $(LIB))
HDR_FLAGS= -I.


all:$(NAME)

$(NAME): $(LIB_PATH)/$(LIB) $(OBJ)
	@ar rc $(NAME) $(OBJ) $(LIB_OBJ_PATH)
	@ranlib $(NAME)

$(LIB_PATH)/$(LIB):
	@make -C libft

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) $(HDR_FLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@make -C libft clean

fclean: clean
	$(RM) $(NAME)
	@make -C libft fclean

re: fclean all
