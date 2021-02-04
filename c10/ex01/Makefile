# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/04 18:35:32 by tpereira          #+#    #+#              #
#    Updated: 2021/02/04 18:40:18 by tpereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = main.c
CC = gcc
FLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME}:
	${CC} ${FLAGS} -o ${NAME} ${SRC}

clean:
	rm -f *.o

fclean:
	rm -f ${NAME}

re: fclean all
