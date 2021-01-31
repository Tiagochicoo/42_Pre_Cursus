# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/31 17:24:06 by tpereira          #+#    #+#              #
#    Updated: 2021/01/31 19:03:01 by tpereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

.c.o:
	${CC} ${FLAGS} -I includes -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY: clean fclean all re
