#Nom du programme
NAME = libftprintf.a

# Compilateur et options
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Fichiers sources et fichiers objets
SRCS = ft_printf.c \
		ft_printf_another.c \
		ft_putchar_fd.c \
		ft_printf_int.c \
		ft_printf_unsigned_int.c \
		ft_putnbr_fd.c \
		ft_putnbr_base_fd.c \
		main.c

# Tous les fichiers .c
OBJS = $(SRCS:.c=.o)	# Conversion des .c en .o

# Header
HEADER = libftprintf.h

# Regles
all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created successfully!"

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "Object files removed."

fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed."

re: fclean all

.PHONY: all clean fclean re
