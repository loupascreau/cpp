# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kali <kali@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 14:49:01 by lpascrea          #+#    #+#              #
#    Updated: 2022/01/04 06:51:52 by kali             ###   ########.fr        #
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
				span.cpp

OBJS		=	${SRCS:.cpp=.o}

CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

NAME		=	span

all:		${NAME}
			@echo "$(_GREEN)span is ready $(_END)"

$(NAME):	${OBJS}
			${CC} ${CFLAGS} -I. ${OBJS} -o ${NAME}

%.o:		%.cpp
			${CC} ${CFLAGS} -o $@ -c $< -I.

clean:
			${RM} ${OBJS}
			@echo "$(_YELLOW)\".o\" files deleted $(_END)"

fclean:		clean
			${RM} ${NAME}
			@echo "$(_RED)span cleaned $(_END)"

re:			fclean all

.PHONY:		all clean fclean re