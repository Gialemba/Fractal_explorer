# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tali <tali@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/11 04:35:51 by tali              #+#    #+#              #
#    Updated: 2024/02/10 23:23:38 by tali             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -O3 -lXext -lX11 -lm -lbsd
CC		= gcc

PATHS	= src/
PATHO	= obj/

LIB		= minilibx-linux/libmlx.a minilibx-linux/libmlx_Linux.a 
INC		= -I ./inc

NAME	= fractol

SRC		= $(notdir $(wildcard ${PATHS}*.c))
SRCS	= ${addprefix ${PATHS}, ${SRC}}
OBJ		= ${SRC:.c=.o}
OBJS	= ${addprefix ${PATHO}, ${OBJ}}

${PATHO}%.o: ${PATHS}%.c ${PATHO}
	${CC} ${CFLAGS} -c $< -o $@ ${INC}

all: ${NAME}

${PATHO}:
	mkdir ${PATHO}

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
