# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 17:26:57 by yachehbo          #+#    #+#              #
#    Updated: 2021/11/05 13:24:20 by yachehbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memcpy.c ft_memset.c \
ft_strlcat.c ft_strlen.c ft_strnstr.c ft_tolower.c ft_strrchr.c ft_toupper.c\
ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c ft_memmove.c\
ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_calloc.c ft_strdup.c ft_strcpy.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_striteri.c\
ft_strmapi.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c
OBJ = $(SRC:.c=.o)
SRC_BNS = $(SRC) ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJ_BNS = $(SRC_BNS:.c=.o)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
%.o: %.c libft.h
		$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

clean:
		$(RM) $(OBJ) $(OBJ_BNS)

fclean: clean
		$(RM) $(NAME) 
bonus: $(OBJ_BNS)
	ar rc $(NAME) $(OBJ_BNS)

re: fclean all

.PHONY: clean fclean re bonus
