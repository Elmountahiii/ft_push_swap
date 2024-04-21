NAME = push_swap
NAME_BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror 
SRC = $(wildcard *.c) $(wildcard mandatory/*/*.c) 
SRCB = $(wildcard bonus/*.c) $(wildcard bonus/*/*c)
OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)
P_header = mandatory/push_swap.h
L_header = lib/lib.h
C_header = bonus/checker.h
RM = rm -rf

all: $(NAME)

bonus : $(NAME_BONUS)

%.o : %.c $(P_header) $(L_header)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) lib/*.c
	@cd lib && make
	$(CC) $(CFLAGS) $(OBJ) lib/lib.a -o $(NAME)

$(NAME_BONUS) : $(OBJB) $(C_header) lib/*.c
				@cd lib && make
				$(CC) $(CFLAGS) $(OBJB) lib/lib.a -o $(NAME_BONUS)

clean:
	$(RM) $(OBJ)
	cd lib && make clean
	cd bonus && find . -name "*.o" -delete 

fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)
	cd lib && make fclean

re: fclean all

.PHONY: all clean fclean re