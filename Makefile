# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 17:58:41 by mliew             #+#    #+#              #
#    Updated: 2022/05/24 10:05:47 by mliew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	ft_isalpha ft_isalnum ft_isprint ft_isascii ft_isdigit 	\
				ft_tolower ft_toupper ft_strlen ft_bzero ft_atoi		\
				ft_memcpy ft_memmove ft_memset ft_memcmp ft_memchr

SRCS		= $(addsuffix .c, ${SRC})

NAME		= libft.a
OBJS		= ${SRCS:.c=.o}
FLAGS		= -Wall -Wextra -Werror -Idir
CC			= gcc
RM			= rm -f
AR			= ar rc
RN			= ranlib

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}
	${RN} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: all fclean

.PHONY: all clean fclean re