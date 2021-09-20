LIBMLX = ../mlx_linux/libmlx_Linux.a -Imlx_linux

CFLAGS = -Wall -Wextra -Werror

LFLAGS = -lXext -lX11 -lm -lz

NAME = so_long

SRC = $(wildcard *.c)

OBJ = $(SRC:%.c=%.o)

all: 
	make -C ../mlx_linux
	make $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -g3 $(LIBMLX) $(LFLAGS)

%.o: %.c
	gcc $(CFLAGS) -o $@ -c $< -I../inc -Imlx_linux -L/usr/bin

clean:
	make clean -C ../mlx_linux
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re
