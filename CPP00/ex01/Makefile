# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mario <mario@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 21:08:03 by mario             #+#    #+#              #
#    Updated: 2023/05/11 21:24:18 by mario            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Contact.cpp PhoneBook.cpp

OBJS	= ${SRCS:.cpp=.o}

SRCSB	=

OBJB	= ${SRCSB:.cpp=.o}

NAME	= phonebook

CXX	= clang++

RM	= rm -f

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

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