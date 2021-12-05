NAME=megaphone

all:$(NAME)

CC = clang++

SRC= megaphone.cpp

OBJ= $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror

$(NAME): megaphone.o
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf megaphone.o

fclean: clean
	rm -rf $(NAME)

test: $(NAME)
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone

re: fclean all
