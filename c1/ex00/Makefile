NAME=zombie

SRC= main.cpp \
	newZombie.cpp \
	randomChump.cpp \
	Zombie.cpp \

OBJ=$(SRC:.cpp=.o)

CC=clang++

CFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all