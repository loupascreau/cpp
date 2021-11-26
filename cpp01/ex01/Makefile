# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 11:37:24 by lpascrea          #+#    #+#              #
#    Updated: 2021/11/26 12:58:04 by lpascrea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#COLORS#
_END	= \033[0m
_GREEN	= \033[0;32m
_RED	= \033[0;31m
_BLUE	= \033[0;96m
_YELLOW	= \033[0;33m
_MAG 	= \033[0;35m
#------#

SRCS		=	main.cpp \
				ZombieHorde.cpp \
				Zombie.cpp

OBJS		=	${SRCS:.cpp=.o}

CC			=	g++

RM			=	rm -f

NAME		=	horde

all:		${NAME}
			@echo "$(_GREEN)Horde is ready $(_END)"

$(NAME):	${OBJS}
			${CC} ${CFLAGS} -I. ${OBJS} -o ${NAME}

%.o:		%.c
			${CC} -o $@ -c $< -I.

clean:
			${RM} ${OBJS}
			@echo "$(_YELLOW)\".o\" files deleted $(_END)"

fclean:		clean
			${RM} ${NAME}
			@echo "$(_RED)Horde cleaned $(_END)"

re:			fclean all

.PHONY:		all clean fclean re