# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 17:10:38 by ichouare          #+#    #+#              #
#    Updated: 2022/10/26 11:27:06 by ichouare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=libft.a
CC= cc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
LIBFT = libft.h

SRC = ft_isalpha.c  ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
	ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c  ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c  ft_strdup.c ft_substr.c  ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c  \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putstr_fd.c  ft_putendl_fd.c ft_putnbr_fd.c
SRC_B = ft_lstnew.c  ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c  ft_lstclear.c  ft_lstiter.c ft_lstmap.c
OBJ = $(SRC:.c=.o)
OBJ_B = $(SRC_B:.c=.o)

all: $(NAME) 

$(NAME): $(OBJ) 
		ar rcs $@ $(OBJ)
		
bonus : $(OBJ_B) 
	ar rcs $(NAME) $(OBJ_B)
%.o:%.c $(LIBFT)
		$(CC)  -c $< $(CFLAGS)

clean:
		$(RM) $(OBJ)
		$(RM) $(OBJ_B)

fclean: clean
		$(RM) $(NAME)

re : fclean all bonus