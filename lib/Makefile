SRC = $(wildcard *.c) $(wildcard get_nex_line/*.c)

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