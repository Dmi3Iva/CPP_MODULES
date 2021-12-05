NAME=bsp

SRC= main.cpp \
     Fixed.cpp \
     bsp.cpp \
     Point.cpp

OBJ=$(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror

CC=clang++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
