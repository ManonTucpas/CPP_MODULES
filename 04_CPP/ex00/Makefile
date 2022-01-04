NAME	=	animal

CC		=	c++ -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address #-Wshadow -Wno -shadow 

INC 	= -I./includes

SRCS	=	main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongCat.cpp \
			WrongAnimal.cpp \
			
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