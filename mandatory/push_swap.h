/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:41:16 by megrisse          #+#    #+#             */
/*   Updated: 2022/08/16 19:42:22 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_stack
{
	int		*stack_a;
	int		*stack_b;
	int		*stack_s;
	int		size;
	int		size_a;
	int		size_b;
	int		last_a;
	int		last_b;
	int		head_a;
	int		head_b;
}		t_stack;

/******* libft *******/
size_t	ft_strlen(const	char *s);
void	ft_putstr(char *s);
int		ft_atoi(char *str);
int		ft_isdigit(int c);
char	*ft_strchr(char *str, int x);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*get_next_line(int fd);
int		*ft_swap(int *a, int *b);

/********* parsing ********/
int		check_error(char **tab);
char	**parse_args(int ac, char **av);
char	**parse_to_stack(int ac, char **av, int *i);

/*********** Stack Utils **********/
void	stacks_init(t_stack **tab, int size);
void	push_to_stack(t_stack *array, int value, int i);
int		check_if_sorted(t_stack *array);
void	bubble_sort(int *arr, int len);

/************ Instructions ***********/
void	sa(t_stack *stack, char *str);
void	pa(t_stack *stack, char *str);
void	ra(t_stack *stack, char *str);
void	rra(t_stack *stack, char *str);
void	sb(t_stack *stack, char *str);
void	pb(t_stack *stack, char *str);
void	rb(t_stack *stack, char *str);
void	rrb(t_stack *stack, char *str);
void	rr(t_stack *array, char *str);

/************ Sorting Utils **********/
int		get_minimum(t_stack *array);
int		get_maximum_3(t_stack *array);
int		get_maximum(t_stack *array);
int		get_max_idx(t_stack *array);
int		*ft_swap(int *a, int *b);
void	sort_2(t_stack *array);
void	sort_3(t_stack *array);
void	sort_5(t_stack *stack);
void	sort_middle_nd_advance(t_stack *array, int div);

#endif