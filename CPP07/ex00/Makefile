# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 19:09:03 by codespace         #+#    #+#              #
#    Updated: 2023/10/19 19:10:05 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp

OBJS	= ${SRCS:.cpp=.o}

SRCSB	=

OBJB	= ${SRCSB:.cpp=.o}

NAME	= template

CXX	= c++

RM	= rm -f

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

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