# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlecuyer <mlecuyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 11:07:07 by mlecuyer          #+#    #+#              #
#    Updated: 2021/12/07 11:08:58 by mlecuyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	tests

CC		=	clang++ -Wall -Wextra -Werror -std=c++98

SRCS	=	tests.cpp \
			Account.cpp \

OBJS	=	${SRCS:.c=.o}

all:		${NAME}

$(NAME)	: ${OBJS}
				${CC} ${OBJS} -o $(NAME)

clean:		

fclean:		clean
				rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
