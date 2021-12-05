NAME = phone_book

SRC = main.cpp \
	phoneBook.class.cpp \
	contact.class.cpp \

OBJ = $(SRC:.cpp=.o)

CC=clang++

CFLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
