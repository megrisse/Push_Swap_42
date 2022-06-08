# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 21:48:26 by megrisse          #+#    #+#              #
#    Updated: 2022/06/08 01:06:01 by megrisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc

INC = push_swap

FLAGS = -Wall -Wextra -Werror -g

HEADER = push_swap.h

SRC =	utils/ft_atoi.c\
		utils/ft_calloc.c\
		utils/ft_isdigit.c\
		utils/ft_split.c\
		utils/ft_strlcat.c\
		utils/ft_strlcpy.c\
		utils/ft_strlen.c\
		utils/get_next_line.c\
		utils/ft_strjoin.c\
		utils/ft_bzero.c\
		instructions/instructions.c\
		push_swap.c\
		parse.c\
		stack.c\

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	rm -rf *.o
	rm -rf utils/*.o
	rm -rf instructions/*.o

fclean : clean
	rm -rf $(NAME)

re : fclean all