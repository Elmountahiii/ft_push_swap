NAME = ../checker
CC= cc
CFLAGS = -Wall -Wextra -Werror
SRC = main_bonus.c nodeUtils/add_node_back_bonus.c nodeUtils/create_node_bonus.c \
operations/push_bonus.c operations/reversRotate_bonus.c operations/rotate_bonus.c operations/swap_bonus.c \
stackUtils/ft_init_stack_bonus.c stackUtils/ft_is_duplicated_bonus.c stackUtils/ft_is_sorted_bonus.c stackUtils/ft_stack_len_bonus.c \
utils/ft_atoi_bonus.c utils/ft_check_instruction_bonus.c utils/ft_exit_bonus.c utils/ft_print_bonus.c utils/ft_split_bonus.c utils/ft_free_stack_bonus.c \
utils/ft_read_instruction_bonus.c
OBJ = $(SRC:.c=.o)
RM = rm -rf

all : $(NAME) 


$(NAME) : $(OBJ) checker_bonus.h ../lib/*.c 
		cd .. && cd lib && make
		$(CC) $(CFLAGS) $(OBJ) ../lib/lib.a -o $(NAME)

%.o : %.c checker_bonus.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)
	cd .. && cd lib && make clean

fclean: clean
	$(RM) $(NAME)
	cd .. && cd lib && make fclean

.PHONY: all clean fclean re bonus