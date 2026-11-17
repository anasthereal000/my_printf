NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

CFILES = ft_printf.c ft_putstr.c ft_putnbr.c ft_print_adrr.c \
         ft_print_unsigned.c ft_putchar.c \
         ft_print_hex_lower.c ft_print_hex_upper.c

OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(AR) $(NAME) $(OFILES)

clean:
	$(RM) $(OFILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re