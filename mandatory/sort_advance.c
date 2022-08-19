/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_advance.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:35:57 by megrisse          #+#    #+#             */
/*   Updated: 2022/08/15 23:06:40 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stackcopy(t_stack *stack)
{
	int	i;

	i = 0;
	while (i <= stack->last_a)
	{
		stack->stack_s[i] = stack->stack_a[i];
		i++;
	}
}

int	optim(t_stack *array, int p1, int p2, int count)
{
	if (array->stack_a[array->head_a] > array->stack_s[p1]
		&& array->stack_b[array->head_b] <= array->stack_s[p2]
		&& array->size_b >= 2)
		rr(array, "\n");
	else if (array->stack_b[array->head_b]
		<= array->stack_s[p2] && array->size_b >= 2)
		rb(array, "rb\n");
	if (array->stack_a[array->head_a] <= array->stack_s[p1])
	{
		pb(array, "pb\n");
		count++;
	}
	else
		ra(array, "ra\n");
	return (count);
}

void	start_sorting(t_stack *array, int div)
{
	int	p1;
	int	p2;
	int	count;

	p1 = (array->last_a + 1) / div;
	p2 = p1 / 2;
	count = 0;
	while (array->last_a > 0)
	{
		count = optim(array, p1, p2, count);
		if (count >= p1)
		{
			stackcopy(array);
			bubble_sort(array->stack_s, array->size_a);
			p1 = array->last_a / div;
			p2 = p1 / 2;
			count = 0;
		}
	}
}

void	finish_sorting(t_stack *array)
{
	int	max;
	int	idx;
	int	mid;

	while (array->head_b < array->size)
	{
		mid = ((array->size - array->head_b) / 2) + array->head_b;
		max = get_maximum(array);
		idx = get_max_idx(array);
		if (idx <= mid)
		{
			while (array->stack_b[array->head_b] != max)
			{
				rb(array, "rb\n");
			}
		}
		else if (idx > mid)
		{
			while (array->stack_b[array->head_b] != max)
			{
				rrb(array, "rrb\n");
			}
		}
		pa(array, "pa\n");
	}
}

void	sort_middle_nd_advance(t_stack *array, int div)
{
	int	p1;
	int	p2;
	int	index;

	p1 = array->size / div;
	p2 = 0;
	index = 0;
	bubble_sort(array->stack_s, array->size_a);
	start_sorting(array, div);
	finish_sorting(array);
}
