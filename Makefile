NAME = push_swap
SRC = $(wildcard ./src/*c)
INC = $(wildcard ./inc/*c)
OBJ1 = $(SRC:.c=.o)
OBJ2 = $(INC:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra -fsanitize=address -g3

.SILENT:

$(NAME):	$(OBJ1) $(OBJ2)
	$(CC) $(CFLAGS) $(OBJ1) $(OBJ2) -o $@
	echo "Compilation done successfully!"
	echo "Execute ./push_swap <list of numbers>"

all:	$(NAME)

clean:
	rm -f ./src/*.o ./inc/*.o
	rm -f ./src/*.out ./inc/*.out

fclean: clean
	rm -f $(NAME)

re:		fclean all