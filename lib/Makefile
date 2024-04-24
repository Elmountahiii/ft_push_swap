SRC = ft_get_sign.c ft_is_nbr.c ft_is_sign.c ft_is_space.c \
ft_strlen.c ft_strncmp.c ft_substr.c get_nex_line/get_next_line_utils.c get_nex_line/get_next_line.c
CC = cc
CFLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:.c=.o)

AR = ar rcs

RM = rm -rf

NAME = lib.a

%.o : %.c lib.h
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)


$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean : 
	$(RM) $(OBJ)


fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re