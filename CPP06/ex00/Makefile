# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 17:03:30 by magonzal          #+#    #+#              #
#    Updated: 2023/11/25 12:20:13 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp ScalarConverter.cpp Checker.cpp

OBJS	= ${SRCS:.cpp=.o}

SRCSB	=

OBJB	= ${SRCSB:.cpp=.o}

NAME	= convert

CXX	= c++

RM	= rm -f

CXXFLAGS	= #-Wall -Wextra -Werror -std=c++98 -g3 

.c.o:
		${CXX} ${CXXFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS}
				${CXX} ${CXXFLAGS} -o $(NAME) $(OBJS)

bonus:		
			@make OBJS="${OBJB}"

all:		${NAME}

clean:
				${RM} ${OBJS} ${OBJB}

fclean: 	clean
				${RM} ${NAME}

re: 		fclean all

rebonus:	fclean bonus

.PHONY:		all bonus clean fclean re rebonus
