CC		=	g++ -g3

CXXFLAGS	=	-W -Wall -Werror -Wextra

NAME		=	plazza

RM		=	rm -f

INCLUDE		=	-Iincludes/

SRC		=	src/CondVar.cpp \
			src/Error.cpp \
			src/main.cpp \
			src/Mutex.cpp \
			src/Reception.cpp \
			src/MyThread.cpp \
			src/Cooks.cpp \
			src/ScopedLock.cpp
#			src/Kitchen.cpp \

OBJ		=	$(SRC:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJ)
			$(CC) $(OBJ) -o $(NAME) -pthread

%.o:			%.cpp
			$(CC) $(CXXFLAGS) $(INCLUDE) -o $@ -c $<

clean:
			$(RM) $(OBJ)

fclean:			clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:			all clean fclean re
