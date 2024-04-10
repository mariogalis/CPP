# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 20:12:49 by magonzal          #+#    #+#              #
#    Updated: 2023/11/15 20:13:07 by magonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp

OBJS	= ${SRCS:.cpp=.o}

SRCSB	=

OBJB	= ${SRCSB:.cpp=.o}

NAME	= array

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
