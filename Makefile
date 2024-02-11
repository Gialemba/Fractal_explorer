# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tali <tali@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/11 04:35:51 by tali              #+#    #+#              #
#    Updated: 2024/02/11 04:35:54 by tali             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -O3 -lXext -lX11 -lm -lbsd
CC		= gcc
PATHS	= src/
PATHO	= obj/
LIB		= minilibx-linux/libmlx.a minilibx-linux/libmlx_Linux.a printf.a
INC		= -I ./inc
NAME 	= fractol
SRC		= main.c ft_render1.c ft_render2.c hook_utils.c key_input.c mouse_input.c fractal.c fractal2.c form.c ft_b_frac2.c ft_b_frac1.c zoom.c
SRCS	= ${addprefix ${PATHS}, ${SRC}}
OBJ		= ${SRC:.c=.o}
OBJS	= ${addprefix ${PATHO}, ${OBJ}}

${PATHO}%.o: ${PATHS}%.c
	${CC} -c $< -o $@ ${INC} ${CFLAGS}

all: ${NAME}

${LIB}:
	make -C minilibx-linux/

${NAME}: ${LIB} ${OBJS}
	${CC} -o ${NAME} ${OBJS} ${LIB} ${INC} ${CFLAGS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re:  fclean all
	make re -C minilibx-linux/

.PHONY : clean all fclean re
