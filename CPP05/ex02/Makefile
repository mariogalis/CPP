# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 17:49:35 by magonzal          #+#    #+#              #
#    Updated: 2023/11/18 18:42:50 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

OBJS	= ${SRCS:.cpp=.o}

SRCSB	=

OBJB	= ${SRCSB:.cpp=.o}

NAME	= moreforms

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
