# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moazzedd <moazzedd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 15:35:04 by moazzedd          #+#    #+#              #
#    Updated: 2022/10/22 00:19:37 by moazzedd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_strtrim.c ft_strjoin.c  ft_strlen.c  ft_substr.c ft_strlcat.c ft_calloc.c ft_strdup.c ft_strnstr.c ft_atoi.c  ft_memcmp.c ft_memchr.c \
	ft_strncmp.c  ft_strrchr.c  ft_strchr.c  ft_bzero.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c  \
	ft_toupper.c ft_tolower.c ft_strlcpy.c   ft_split.c ft_striteri.c\
	ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
	

OBJS = ${SRC:.c=.o}

CC = cc

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

all:		${NAME}
	
${NAME}:
			${CC} ${FLAGS} -c ${SRC}
			ar -rc ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all
