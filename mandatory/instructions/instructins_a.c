/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructins_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:36:42 by megrisse          #+#    #+#             */
/*   Updated: 2022/08/15 23:07:14 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *stack, char *str)
{
	int	temp;

	if (stack->last_a == 0 || !str)
		return ;
	temp = stack->stack_a[stack->head_a];
	stack->stack_a[stack->head_a] = stack->stack_a[stack->head_a + 1];
	stack->stack_a[stack->head_a + 1] = temp;
	ft_putstr(str);
}

void	pa(t_stack *stack, char *str)
{
	int	i;

	stack->last_a++;
	i = stack->last_a;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[stack->head_a] = stack->stack_b[stack->head_b];
	stack->head_b++;
	stack->size_a++;
	stack->size_b--;
	ft_putstr(str);
}

void	ra(t_stack *stack, char *str)
{
	int	tmp;
	int	i;

	i = stack->head_a;
	tmp = stack->stack_a[stack->head_a];
	while (i < stack->size_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[stack->last_a] = tmp;
	ft_putstr(str);
}

void	rra(t_stack *stack, char *str)
{
	int	tmp;
	int	i;

	tmp = stack->stack_a[stack->last_a];
	i = stack->last_a;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[stack->head_a] = tmp;
	ft_putstr(str);
}
