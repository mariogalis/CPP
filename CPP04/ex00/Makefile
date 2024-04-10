# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 14:49:53 by mario             #+#    #+#              #
#    Updated: 2023/09/28 16:51:47 by magonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

OBJS	= ${SRCS:.cpp=.o}

SRCSB	=

OBJB	= ${SRCSB:.cpp=.o}

NAME	= Animal

CXX	= c++

RM	= rm -f

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3 

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
