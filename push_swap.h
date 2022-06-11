/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:01:39 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/12 00:20:39 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define PS_MIN -2147483648
# define PS_MAX 2147483647

typedef struct Stack
{
	int		*array_a;
	int		*array_b;
	int		*array_s;
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
char	*ft_strchr(char *s, int c);
void	ft_putstr(char *s);
long	ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*get_next_line(int fd);

/********* parse ********/

int		check_array(char **tab);
char	**get_args(int ac, char **av);

/********* stack *********/
t_stack	*init_stacks(int size);
void	push(t_stack *array, int value);
int		is_sortd(t_stack *array);

/******** instructions  *****/
void	sa(t_stack *stack, char *str);
void	pa(t_stack *stack, char *str);
void	ra(t_stack *stack, char *str);
void	rra(t_stack *stack, char *str);
void	sb(t_stack *stack, char *str);
void	pb(t_stack *stack, char *str);
void	rb(t_stack *stack, char *str);
void	rrb(t_stack *stack, char *str);

/********* sort ***********/
void	sort_3(t_stack *array);


#endif
