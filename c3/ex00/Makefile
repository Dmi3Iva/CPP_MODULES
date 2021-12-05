NAME=trap

SRC=ClapTrap.cpp \
	main.cpp

OBJ=$(SRC:.cpp=.o)

CXX=clang++

CFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
