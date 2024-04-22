NAME = push_swap
NAME_BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror 
SRC =  main.c mandatory/nodeUtils/add_node_back.c mandatory/nodeUtils/create_node.c mandatory/nodeUtils/ft_setup_nodes.c \
mandatory/operations/push.c mandatory/operations/reversRotate.c mandatory/operations/routate.c mandatory/operations/swap.c \
mandatory/sort/ft_best_match.c mandatory/sort/ft_calculate_cost.c mandatory/sort/ft_get_best_move.c mandatory/sort/ft_get_targets.c mandatory/sort/ft_mark_best.c mandatory/sort/ft_push_swap.c mandatory/sort/ft_push_best.c mandatory/sort/ft_revers_move.c mandatory/sort/ft_rotate_move.c \
mandatory/sort/ft_sort_3.c mandatory/sort/ft_sort.c mandatory/sort/ft_split_stack.c mandatory/sort/ft_update_position.c \
mandatory/stackUtils/ft_get_stack_average.c mandatory/stackUtils/ft_init_stack.c  mandatory/stackUtils/ft_is_duplicated.c mandatory/stackUtils/ft_is_sorted.c mandatory/stackUtils/ft_stack_len.c mandatory/stackUtils/ft_stack_min.c mandatory/stackUtils/ft_update_stack_index.c \
mandatory/utils/ft_atoi.c mandatory/utils/ft_exit.c mandatory/utils/ft_print.c mandatory/utils/ft_split.c mandatory/utils/ft_free_stack.c
OBJ = $(SRC:.c=.o)
HEADER = mandatory/push_swap.h
RM = rm -rf

all: $(NAME)

bonus : $(NAME_BONUS)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) lib/*.c
	@cd lib && make
	$(CC) $(CFLAGS) $(OBJ) lib/lib.a -o $(NAME)

$(NAME_BONUS) : 
		cd bonus && make

clean:
	$(RM) $(OBJ)
	cd lib && make clean
	cd bonus && make clean

fclean: clean
	$(RM) $(NAME)
	cd lib && make fclean
	cd bonus && make fclean

re: fclean all

.PHONY: all clean fclean re