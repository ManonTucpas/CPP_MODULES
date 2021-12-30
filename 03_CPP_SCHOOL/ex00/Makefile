NAME	=	claptrap

CC		=	c++ -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

INC 	= -I./includes

SRCS	=	main.cpp \
			ClapTrap.cpp \
			ClapTrapGame.cpp \
			ClapTrapSetGet.cpp \


FIL = 		$(addprefix srcs/, $(SRCS))

OBJS	=	${FIL:.c=.o}


all:		${NAME}

$(NAME)	: ${OBJS}
				${CC} ${INC} ${OBJS} -o $(NAME)

clean:		

fclean:		clean
				rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re