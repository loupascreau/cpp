# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 11:05:07 by lpascrea          #+#    #+#              #
#    Updated: 2021/11/30 16:30:52 by lpascrea         ###   ########.fr        #
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
				errors.cpp \

OBJS		=	${SRCS:.cpp=.o}

CC			=	g++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

NAME		=	replace

all:		${NAME}
			@echo "$(_GREEN)Replace is ready $(_END)"

$(NAME):	${OBJS}
			${CC} ${CFLAGS} -I. ${OBJS} -o ${NAME}

%.o:		%.cpp
			${CC} ${CFLAGS} -o $@ -c $< -I.

clean:
			${RM} ${OBJS}
			@echo "$(_YELLOW)\".o\" files deleted $(_END)"

fclean:		clean
			${RM} ${NAME}
			@echo "$(_RED)Replace cleaned $(_END)"

re:			fclean all

.PHONY:		all clean fclean re