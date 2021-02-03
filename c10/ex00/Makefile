# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/03 22:05:23 by tpereira          #+#    #+#              #
#    Updated: 2021/02/03 22:11:51 by tpereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_display_file.c
CC = gcc
FLAGS = -Wall -Werror -Wextra 

all: ${NAME}

${NAME}:
	${CC} ${FLAGS} -o ${NAME} ${SRC}

clean:
	rm -f *.o *.h.gch

fclean: clean
	rm -f ${NAME}
