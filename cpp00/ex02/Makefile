# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 10:23:47 by lpascrea          #+#    #+#              #
#    Updated: 2021/11/25 11:17:54 by lpascrea         ###   ########.fr        #
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

SRCS		=	Account.cpp \
				test.cpp

OBJS		=	${SRCS:.cpp=.o}

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror -g

RM			=	rm -f

NAME		=	account

all:		${NAME}
			@echo "$(_GREEN)Account is ready $(_END)"

$(NAME):	${OBJS}
			${CC} ${CFLAGS} -I. ${OBJS} -o ${NAME}

%.o:		%.c
			${CC} -I. -o $@ -c $<

clean:
			${RM} ${OBJS}
			@echo "$(_YELLOW)\".o\" files deleted $(_END)"

flcean:		clean
			${RM} ${NAME}
			@echo "$(_RED)Account cleaned $(_END)"

re:			fclean all

.PHONY:		all clean fclean re