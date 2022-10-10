# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 22:47:26 by aarteta           #+#    #+#              #
#    Updated: 2022/09/30 22:04:53 by aarteta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Key variable and files definitions:

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar rc
RM = rm -f

#include basic .c files
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c \
		ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c  ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_strlcpy.c \
		ft_substr.c ft_strtrim.c ft_strjoin.c \
		ft_split.c ft_itoa.c ft_striteri.c ft_strmapi.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

#include bonus .c files
SRC_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

#compile basic .o files from .c, with GCC
OBJ = $(SRC:.c=.o)

#compile bonus .o files from .c, with GCC
OBJ_B =	$(SRC_B:.c=.o)

INCLUDE = libft.h

# **************************************************************************** #

all:		$(NAME)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJ)
			$(AR) $(NAME) $^

bonus:		$(OBJ) $(OBJ_B)
			$(AR) $(NAME) $^

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re



