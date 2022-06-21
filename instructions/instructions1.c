/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 03:17:35 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/20 18:48:57 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_stack *stack, char *str)
{
	int	tmp;

	if (stack->head_a > stack->size - 2)
		return ;
	tmp = stack->array_b[stack->head_b];
	stack->array_b[stack->head_b] = stack->array_b[stack->head_b + 1];
	stack->array_b[stack->head_b + 1] = tmp;
	ft_putstr(str);
}

void	pb(t_stack *stack, char *str)
{
	int	i;

	i = 0;
	stack->head_b--;
	stack->array_b[stack->head_b] = stack->array_a[stack->head_a];
	while (i < stack->last_a)
	{
		stack->array_a[i] = stack->array_a[i + 1];
		i++;
	}
	stack->last_a--;
	ft_putstr(str);
	stack->size_a--;
	stack->size_b++;
}

void	rb(t_stack *stack, char *str)
{
	int	tmp;
	int	i;

	i = stack->head_b;
	tmp = stack->array_b[stack->head_b];
	while (i < stack->last_b)
	{
		stack->array_b[i] = stack->array_b[i + 1];
		i++;
	}
	stack->array_b[stack->last_b] = tmp;
	ft_putstr(str);
}

void	rrb(t_stack *stack, char *str)
{
	int	tmp;
	int	i;

	tmp = stack->array_b[stack->last_b];
	i = stack->last_b;
	while (i > stack->head_b)
	{
		stack->array_b[i] = stack->array_b[i - 1];
		i--;
	}
	stack->array_b[stack->head_b] = tmp;
	ft_putstr(str);
}

void	rr(t_stack *array, char *str)
{
	ra(array, "r");
	rb(array, "r");
	ft_putstr(str);
}
