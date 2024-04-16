NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address
SRC = $(wildcard *.c) $(wildcard mandatory/*/*.c) 
OBJ = $(SRC:.c=.o)

RM = rm -rf

all: $(NAME)

%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@cd lib && make
	$(CC) $(CFLAGS) $(OBJ) lib/lib.a -o $(NAME)

clean:
	$(RM) $(OBJ)
	cd lib && make clean

fclean: clean
	$(RM) $(NAME)
	cd lib && make fclean

re: fclean all

.PHONY: all clean fclean re