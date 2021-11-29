# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 14:13:15 by lpascrea          #+#    #+#              #
#    Updated: 2021/11/29 16:13:04 by lpascrea         ###   ########.fr        #
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

SRCS		=	megaphone.cpp

OBJS		=	${SRCS:.cpp=.o}

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

NAME		=	megaphone

all:		${NAME}
			@echo "$(_GREEN)Megaphone is ready $(_END)"

$(NAME):	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

%.o:		%.cpp
			${CC} ${CFLAGS} -o $@ -c $<

clean:
			${RM} ${OBJS}
			@echo "$(_YELLOW)\".o\" file deleted $(_END)"

fclean:		clean
			${RM} ${NAME}
			@echo "$(_RED)Megaphone cleaned $(_END)"

re:			fclean all

.PHONY:		all clean fclean re