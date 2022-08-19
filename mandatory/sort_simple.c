/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:36:00 by megrisse          #+#    #+#             */
/*   Updated: 2022/08/16 18:56:16 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack *array)
{
	if (array->stack_a[array->head_a] > array->stack_a[array->head_a + 1])
		sa(array, "sa\n");
}

void	sort_3(t_stack *array)
{
	while (check_if_sorted(array) == 0)
	{
		if (array->stack_a[array->head_a] > array->stack_a[array->last_a])
			ra(array, "ra\n");
		else if (array->stack_a[array->head_a]
			> array->stack_a[array->head_a + 1])
			sa(array, "sa\n");
		else
			ra(array, "ra\n");
	}
}

void	sort_5_help(t_stack *stack)
{
	int	max;
	int	min;
	int	i;

	i = 0;
	max = get_maximum_3(stack);
	min = get_minimum(stack);
	while (i < 2)
	{
		if (stack->stack_a[stack->head_a] == max
			|| stack->stack_a[stack->head_a] == min)
		{
			pb(stack, "pb\n");
			i++;
		}
		else
			ra(stack, "ra\n");
	}
}

void	sort_5(t_stack *stack)
{
	sort_5_help(stack);
	sort_3(stack);
	while (stack->head_b < stack->size)
	{
		if (stack->stack_b[stack->head_b] > stack->stack_a[stack->head_a])
		{
			pa(stack, "pa\n");
			ra(stack, "ra\n");
		}
		else
			pa(stack, "pa\n");
	}
}
