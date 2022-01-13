NAME	=	bureaucrat

CC		=	c++ -Wall -Wextra -Werror -std=c++98  #-fsanitize=address 

SRCS	=	main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			
OBJS	=	${SRCS:.c=.o}


all:		${NAME}

$(NAME)	: ${OBJS}
				${CC} ${OBJS} -o $(NAME)

clean:		

fclean:		clean
				rm -f ${NAME} SHRU_shruberry

re:			fclean all

.PHONY:		all clean fclean re