# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_memmove.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(SRC_BONUS:.c=.o)  # Generar objetos de las funciones bonus
NAME = libft.a
INCLUDE = libft.h

# Regla para compilar la librería estática
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Regla para compilar las funciones bonus y añadirlas a la librería
bonus: $(OBJ) $(BONUS_OBJ) $(INCLUDE)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

# Regla para compilar los archivos .c en archivos .o
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar los archivos objeto generados
clean:
	rm -f $(OBJ) $(BONUS_OBJ)

# Limpiar los archivos objeto y la librería
fclean: clean
	rm -f $(NAME)

# Regla para volver a compilar todo desde cero
re: fclean $(NAME)

# Regla por defecto
all: $(NAME)
.PHONY: all clean fclean re bonus



