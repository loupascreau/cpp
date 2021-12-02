# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 11:35:58 by lpascrea          #+#    #+#              #
#    Updated: 2021/12/02 11:39:57 by lpascrea         ###   ########.fr        #
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

SRCS		=	main.cpp

OBJS		=	${SRCS:.cpp=.o}

CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

NAME		=	karen_filter

all:		${NAME}
			@echo "$(_GREEN)Karen_filter is ready $(_END)"

$(NAME):	${OBJS}
			${CC} ${CFLAGS} -I. ${OBJS} -o ${NAME}

%.o:		%.cpp
			${CC} ${CFLAGS} -o $@ -c $< -I.

clean:
			${RM} ${OBJS}
			@echo "$(_YELLOW)\".o\" files deleted $(_END)"

fclean:		clean
			${RM} ${NAME}
			@echo "$(_RED)Karen_filter cleaned $(_END)"

re:			fclean all

.PHONY:		all clean fclean re