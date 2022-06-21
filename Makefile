# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 21:48:26 by megrisse          #+#    #+#              #
#    Updated: 2022/06/21 19:07:46 by megrisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BNS = checker

CC = gcc

INC = push_swap

FLAGS = -Wall -Wextra -Werror -g

HEADER = push_swap.h
BNS_HEADER = checker.h

SRC =	utils/ft_atoi.c\
		utils/ft_calloc.c\
		utils/ft_isdigit.c\
		utils/ft_split.c\
		utils/ft_strlcat.c\
		utils/ft_strlcpy.c\
		utils/ft_strlen.c\
		utils/ft_strjoin.c\
		utils/ft_bzero.c\
		instructions/instructions.c\
		instructions/instructions1.c\
		instructions/instructions2.c\
		push_swap.c\
		parse.c\
		stack.c\
		sort.c\
		sort1.c\
			  

OBJS = $(SRC:.c=.o)

BNS_SRC = main.c \
		  helper.c \
		  instructions_a.c \
		  parse.c\
		  stack.c\
		  sort.c\
		  sort1.c\
		  utils/ft_atoi.c\
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
		  instructions/instructions1.c\
		  instructions/instructions2.c\

BNS_OBJS = $(BNS_SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

bonus : $(BNS)

$(BNS) : $(BNS_OBJS) 
	$(CC) $(FLAGS) $(BNS_OBJS) -o $(BNS)

clean : 
	rm -rf *.o
	rm -rf utils/*.o
	rm -rf instructions/*.o

fclean : clean
	rm -rf $(NAME)
	rm -rf $(BNS)

re : fclean all