# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 14:45:13 by raitmous          #+#    #+#              #
#    Updated: 2023/11/29 11:24:48 by raitmous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp
OBJS	= ${SRCS:.cpp=.o}
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
NAME	= Array
CC = c++

all	: ${NAME}

${NAME} : 
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

a : all clean