NAME = *.c
FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}:
	gcc ${FLAGS} -c ${NAME} -o
	ar rc libft.a *.o
	ranlib libft.a

clean:
	rm -rf *.o

fclean: clean
	rm -rf libft.a

re: all fclean