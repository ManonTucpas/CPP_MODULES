# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlecuyer@student.42.fr <mlecuyer>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 12:13:12 by mlecuyer@st       #+#    #+#              #
#    Updated: 2021/12/14 15:25:28 by mlecuyer@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombieHorde

CC		=	clang++ -Wall -Wextra -Werror -std=c++98

SRCS	=	Zombie.cpp \
			ZombieHorde.cpp \
			main.cpp \

OBJS	=	${SRCS:.c=.o}

all:		${NAME}

$(NAME)	: ${OBJS}
				${CC} ${OBJS} -o $(NAME)

clean:		

fclean:		clean
				rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re


