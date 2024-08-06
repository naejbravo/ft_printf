# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 10:58:11 by jebravo-          #+#    #+#              #
#    Updated: 2024/08/06 20:31:44 by jebravo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTNAME = libft.a
LIBFTDIR = ./libft
INCLUDE = ft_printf.h

CC = gcc
FLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar rcs

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_u_putnbr.c ft_putptr.c ft_puthexa.c

%.o: %.c ${INCLUDE}
	@${CC} ${FLAGS} -c $< -o $@

OBJS = ${SRCS:.c=.o}

all: ${NAME}

makelibft:
	@make -C ${LIBFTDIR}
	@cp ${LIBFTDIR}/${LIBFTNAME} .
	@mv ${LIBFTNAME} ${NAME}

${NAME}: makelibft ${OBJS}
	@${AR} ${NAME} ${OBJS}

clean:
	@${RM} ${OBJS}
	@cd ${LIBFTDIR} && make clean

fclean:
	@${RM} ${OBJS}
	@${RM} ${NAME}
	@cd ${LIBFTDIR} && make fclean

re: fclean all

.PHONY: all clean fclean re
