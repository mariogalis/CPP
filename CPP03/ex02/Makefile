# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 18:07:35 by magonzal          #+#    #+#              #
#    Updated: 2023/09/18 17:32:43 by magonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp

OBJS	= ${SRCS:.cpp=.o}

SRCSB	=

OBJB	= ${SRCSB:.cpp=.o}

NAME	= FragClap

CXX	= clang++

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

rebonus:	fclean bonus

.PHONY:		all bonus clean fclean re rebonus
