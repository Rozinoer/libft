# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/15 17:49:36 by dmyesha           #+#    #+#              #
#    Updated: 2020/11/15 17:49:42 by dmyesha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS=-c -Wall -Wextra -Werror
CC=gcc
HEADER=libft.h
SOURCES= ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_memset.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isalnum.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_atoi.c ft_strdup.c  ft_strnstr.c  ft_substr.c ft_strjoin.c ft_strtrim.c  ft_calloc.c ft_split.c ft_itoa.c   ft_putchar_fd.c ft_strmapi.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c   ft_split.c ft_strtrim.c ft_strcpy.c
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = ${SOURCES:c=o}

BOBJS = ${BONUS:c=o}

NAME=libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar r libft.a $(OBJS)
	

bonus: ${OBJS} ${BOBJS}
	ar r libft.a ${OBJS} ${BOBJS}


%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $< 
	
clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)


re: fclean all

