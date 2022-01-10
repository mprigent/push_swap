# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 12:05:24 by mprigent          #+#    #+#              #
#    Updated: 2022/01/10 18:32:07 by mprigent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

OBJ_PATH = ./

SRC =		parsing/ft_parse.c \
			parsing/ft_print_err.c \
			srcs/ft_free.c \
			srcs/ft_init_var.c \
			srcs/ft_push.c \
			srcs/ft_swap.c \
			srcs/ft_rotate.c \
			srcs/ft_reverse_rotate.c \
			srcs/ft_three_nbr.c \
			utils/ft_atoi.c \
			utils/ft_putendl_fd.c \
			utils/ft_putstr.c \
			main.c


OBJ_NAME = $(SRC:.c=.o)

# Files

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
OBJ2 = $(addprefix $(OBJ_PATH), $(OBJ2_NAME))

# Flags

CC = gcc

CFLAGS =  -Wall -Werror -Wextra -g -fsanitize=address

# Rules

all:  $(NAME) $(NAME2)

$(NAME) :	$(OBJ)
	@echo "\033[34mCreation of $(NAME) ...\033[0m"
	gcc -o $(NAME) $(CFLAGS) $(SRC)
	@echo "\033[32m$(NAME) created\n\033[0m"

clean:
	@echo "\033[33mRemoval of .o files of $(NAME)...\033[0m"
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo "\033[31mFiles .o deleted\n\033[0m"

fclean: clean
	@echo "\033[33mRemoval of $(NAME)...\033[0m"
	@rm -f $(NAME)
	@echo "\033[31mBinary $(NAME) deleted\n\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re
