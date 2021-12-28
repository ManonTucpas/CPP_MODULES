NAME	=	karenFilter

CC		=	clang++ -Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp \
			Karen.cpp \
			
OBJS	=	${SRCS:.c=.o}

all:		${NAME}

$(NAME)	: ${OBJS}
				${CC} ${OBJS} -o $(NAME)

clean:		

fclean:		clean
				rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re