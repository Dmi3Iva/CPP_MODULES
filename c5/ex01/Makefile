NAME=bureaucrat

SRC = main.cpp Bureaucrat.cpp Form.cpp

OBJ=$(SRC:.cpp=.o)

HEADERS = Bureaucrat.hpp Form.hpp

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