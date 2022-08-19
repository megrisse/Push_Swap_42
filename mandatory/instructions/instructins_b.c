/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructins_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:36:44 by megrisse          #+#    #+#             */
/*   Updated: 2022/08/15 23:07:18 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_stack *stack, char *str)
{
	int	temp;

	if (stack->head_a > stack->size - 2)
		return ;
	temp = stack->stack_b[stack->head_b];
	stack->stack_b[stack->head_b] = stack->stack_b[stack->head_b + 1];
	stack->stack_b[stack->head_b + 1] = temp;
	ft_putstr(str);
}

void	pb(t_stack *stack, char *str)
{
	int	i;

	i = 0;
	stack->head_b--;
	stack->stack_b[stack->head_b] = stack->stack_a[stack->head_a];
	while (i < stack->last_a)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->last_a--;
	ft_putstr(str);
	stack->size_a--;
	stack->size_b++;
}

void	rb(t_stack *stack, char *str)
{
	int	temp;
	int	i;

	i = stack->head_b;
	temp = stack->stack_b[stack->head_b];
	while (i < stack->last_b)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[stack->last_b] = temp;
	ft_putstr(str);
}

void	rrb(t_stack *stack, char *str)
{
	int	temp;
	int	i;

	temp = stack->stack_b[stack->last_b];
	i = stack->last_b;
	while (i > stack->head_b)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[stack->head_b] = temp;
	ft_putstr(str);
}

void	rr(t_stack *array, char *str)
{
	ra(array, "r");
	rb(array, "r");
	ft_putstr(str);
}
