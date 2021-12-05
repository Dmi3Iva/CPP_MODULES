NAME=ex

SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp

OBJ=$(SRC:.cpp=.o)

HEADERS = *.hpp

CXX=clang++

CXXFLAGS= -Wall -Wextra -Werror -Wshadow -Wno-shadow

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all