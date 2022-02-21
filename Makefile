# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 12:05:24 by mprigent          #+#    #+#              #
#    Updated: 2022/01/24 17:36:37 by mprigent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = clang
CXX := OFF
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g3

PARSING = parsing/ft_parse.c \
			parsing/ft_print_err.c \

UTILS =	utils/ft_atoi.c \
		utils/ft_putendl_fd.c \
		utils/ft_putstr.c \

SOURCES = 	sources/ft_swap.c \
			sources/ft_reverse_rotate.c \
			sources/ft_rotate.c \
			sources/ft_push.c \
			sources/ft_find_nbr.c \
			sources/ft_init_var.c \
			sources/ft_free.c \
			sources/ft_stack_b.c \
			sources/ft_five_nbr.c \
			sources/ft_hundred_nbr.c \
			sources/ft_sort.c \
			sources/ft_three_nbr.c \
		
SRCS = main.c \
	${UTILS} \
	${PARSING} \
	${SOURCES}

OBJS = ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

CLR_RMV		:= \033[0m
RED			:= \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m

${NAME}:	${OBJS}
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			@${CC} ${FLAGS} -o ${NAME} ${OBJS}
			@echo "$(GREEN)$(NAME) created\033[0m ✔️"

all:		${NAME}

clean:
		@ ${RM} *.o */*.o */*/*.o
		@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@${RM} ${NAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"
			
re:		fclean all

.PHONY: clean all fclean re
