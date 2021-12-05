NAME=account

SRC=Account.cpp \
	tests.cpp \

OBJ=$(SRC:.cpp=.o)

all: $(NAME)

CC=clang++

CFLAGS=-Wall -Wextra -Werror

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
