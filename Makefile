NAME = push_swap
vpath %.c src
SRC = $(wildcard src/*c)
OBJ = $(patsubst src/%.c, obj/%.o, $(SRC))
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3

.SILENT:

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS)  $^ -o $@
	echo "Compilation done successfully!"
	echo "Execute ./push_swap <list of numbers>"

obj/%.o:	%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f */*.o *.o */*.out *.out

fclean: clean
	rm -f $(NAME)

re:		fclean all