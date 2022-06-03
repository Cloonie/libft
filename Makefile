# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 17:58:41 by mliew             #+#    #+#              #
#    Updated: 2022/06/03 21:23:15 by mliew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MANDATORY	=	isalpha isalnum isprint isascii isdigit \
				tolower toupper strlen bzero atoi		\
				memcpy memmove memset memcmp memchr		\
				strlcpy strlcat strchr strrchr strncmp	\
				strnstr calloc strdup strjoin substr	\
				strtrim	itoa strmapi striteri split		\
				putchar_fd putstr_fd putendl_fd putnbr_fd

SRCS		=	$(addprefix ft_, $(addsuffix .c, $(MANDATORY)))

BONUS		=	lstnew lstadd_front lstsize lstlast lstadd_back	\
				lstdelone lstclear lstiter lstmap

SRCSB		=	$(addprefix ft_, $(addsuffix .c, $(BONUS)))

NAME		=	libft.a
OBJS		=	$(SRCS:.c=.o)
OBJSB		=	$(SRCSB:.c=.o)
CFLAGS		=	-Wall -Wextra -Werror -I ./
CC			=	gcc
RM			=	rm -f
AR			=	ar rcs

all: $(NAME)

%.o: %.c
	$(CC) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJSB)
	$(AR) $(NAME) $(OBJS) $(OBJSB)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re