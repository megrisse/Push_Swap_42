# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 22:24:33 by megrisse          #+#    #+#              #
#    Updated: 2022/08/15 23:57:03 by megrisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BNS = checker

CC = gcc

INC = push_swap

FLAGS = -Wall -Wextra -Werror -g

HEADER = push_swap.h
BNS_HEADER = checker.h

SRC =	mandatory/Libft/ft_atoi.c\
		mandatory/Libft/ft_isdigit.c\
		mandatory/Libft/ft_split.c\
		mandatory/Libft/ft_strlcat.c\
		mandatory/Libft/ft_strlcpy.c\
		mandatory/Libft/ft_strlen.c\
		mandatory/Libft/ft_strjoin.c\
		mandatory/instructions/instructins_a.c\
		mandatory/instructions/instructins_b.c\
		mandatory/instructions/sorting_utils.c\
		mandatory/push_swap.c\
		mandatory/parser.c\
		mandatory/stack_utils.c\
		mandatory/sort_simple.c\
		mandatory/sort_advance.c\

OBJS = $(SRC:.c=.o)

BNS_SRC = 	mandatory/Libft/ft_atoi.c\
			mandatory/Libft/ft_isdigit.c\
			mandatory/Libft/ft_split.c\
			mandatory/Libft/ft_strlcat.c\
			mandatory/Libft/ft_strlcpy.c\
			mandatory/Libft/ft_strlen.c\
			mandatory/Libft/ft_strjoin.c\
			mandatory/Libft/get_next_line.c\
			mandatory/instructions/instructins_a.c\
			mandatory/instructions/instructins_b.c\
			mandatory/instructions/sorting_utils.c\
			mandatory/parser.c\
			mandatory/stack_utils.c\
			mandatory/sort_simple.c\
			mandatory/sort_advance.c\
			bonus/checker_utils.c\
			bonus/checker.c\

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
	rm -rf mandatory/*.o
	rm -rf mandatory/Libft/*.o
	rm -rf mandatory/instructions/*.o
	rm -rf bonus/*.o

fclean : clean
	rm -rf $(NAME)
	rm -rf $(BNS)

re : fclean all bonus