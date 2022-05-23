NAME =
FLAGS = -Wall -Wextra -Werror

$(NAME) =
all:
	gcc $(FLAGS) *.c
	ar rc libft.a *.o
	ranlib libft.a
clean:
	rm -rf *.o
fclean: clean
	rm -rf libft.a
re: all fclean