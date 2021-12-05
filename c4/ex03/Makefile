NAME=ex

SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJ=$(SRC:.cpp=.o)

HEADERS = AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp

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