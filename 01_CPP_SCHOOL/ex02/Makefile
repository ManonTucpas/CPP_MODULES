# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlecuyer <mlecuyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 16:22:53 by mlecuyer@st       #+#    #+#              #
#    Updated: 2021/12/14 18:02:57 by mlecuyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	refNptr

CC		=	clang++ -Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp \
			
OBJS	=	${SRCS:.c=.o}

all:		${NAME}

$(NAME)	: ${OBJS}
				${CC} ${OBJS} -o $(NAME)

clean:		

fclean:		clean
				rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re