NAME=cast

SRC = main.cpp toChar.cpp toInt.cpp toDouble.cpp toFloat.cpp utils.cpp
OBJ=$(SRC:.cpp=.o)

HEADERS = header.h

CXX=clang++

CXXFLAGS= -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(NAME): $(OBJ) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
