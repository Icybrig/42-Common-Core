NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -MMD -I .
SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c
OBJ = $(SRC:.c=.o)
EMP = $(SRC:.c=.d)
RM = rm -f
AR = ar rcs
all: $(NAME)
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
-include $(EMP)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJ) $(EMP)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re