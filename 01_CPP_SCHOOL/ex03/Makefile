# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlecuyer <mlecuyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 18:06:34 by mlecuyer          #+#    #+#              #
#    Updated: 2021/12/14 19:33:22 by mlecuyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	weapon

CC		=	clang++ -Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp \
			
OBJS	=	${SRCS:.c=.o}

all:		${NAME}

$(NAME)	: ${OBJS}
				${CC} ${OBJS} -o $(NAME)

clean:		

fclean:		clean
				rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re