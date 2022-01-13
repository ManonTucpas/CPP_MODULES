NAME	=	bureaucrat

CC		=	c++ -Wall -Wextra -Werror -std=c++98 #-fsanitize=address 



SRCS	=	main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			
#FIL = 		$(addprefix srcs/, $(SRCS))

OBJS	=	${SRCS:.c=.o}


all:		${NAME}

$(NAME)	: ${OBJS}
				${CC} ${OBJS} -o $(NAME)

clean:		

fclean:		clean
				rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re