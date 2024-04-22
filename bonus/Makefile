NAME = ../checker
CC= cc
CFLAGS = -Wall -Wextra -Werror
SRC = main.c nodeUtils/add_node_back.c nodeUtils/create_node.c \
operations/push.c operations/reversRotate.c operations/rotate.c operations/swap.c \
stackUtils/ft_init_stack.c stackUtils/ft_is_duplicated.c stackUtils/ft_is_sorted.c stackUtils/ft_stack_len.c \
utils/ft_atoi.c utils/ft_check_instruction.c utils/ft_exit.c utils/ft_print.c utils/ft_split.c
Header = checker.h
OBJ = $(SRC:.c=.o)
RM = rm -rf

all : $(NAME)

%.o : %.c $(Header)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ) ../lib/*.c
		cd .. && cd lib && make
		$(CC) $(CFLAGS) $(OBJ) ../lib/lib.a -o $(NAME)
clean :
	$(RM) $(OBJ)
	cd .. && cd lib && make clean

fclean: clean
	$(RM) $(NAME)
	cd .. && cd lib && make fclean

.PHONY: all clean fclean re bonus