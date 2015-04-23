CC		=	g++ -g3

CXXFLAGS	=	-W -Wall -Werror -Wextra

NAME		=	plazza

RM		=	rm -f

SRC		=	CondVar.cpp \
			Error.cpp \
			Kitchen.cpp \
			main.cpp \
			Mutex.cpp \
			Reception.cpp \
			ScopedLock.cpp

OBJ	=		$(SRC:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJ)
			$(CC) $(OBJ) $(NAME)

%.o:			%.cpp
			$(CC) $(CXXFLAGS) -o $@ -c $<

clean:
			$(RM) $(OBJ)

fclean:			clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:			all clean fclean re
