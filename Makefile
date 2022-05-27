# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 17:58:41 by mliew             #+#    #+#              #
#    Updated: 2022/05/27 14:59:48 by mliew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	isalpha isalnum isprint isascii isdigit \
				tolower toupper strlen bzero atoi		\
				memcpy memmove memset memcmp memchr		\
				strlcpy strlcat strchr strrchr strncmp	\
				strnstr calloc strdup strjoin substr	\
						\
				putchar_fd putstr_fd putendl_fd putnbr_fd
# strtrim split itoa strmapi striteri
SRCS		= $(addprefix ft_, $(addsuffix .c, ${SRC}))

NAME		= libft.a
OBJS		= ${SRCS:.c=.o}
CFLAGS		= -Wall -Wextra -Werror -I ./
CC			= gcc
RM			= rm -f
AR			= ar rcs

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re