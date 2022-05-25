# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 17:58:41 by mliew             #+#    #+#              #
#    Updated: 2022/05/24 18:18:36 by mliew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	isalpha isalnum isprint isascii isdigit \
				tolower toupper strlen bzero atoi		\
				memcpy memmove memset memcmp memchr		\
				strlcpy strlcat strchr strrchr strncmp	\
				strnstr

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