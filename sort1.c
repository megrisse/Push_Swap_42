/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 20:13:27 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/21 21:06:19 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stacpy(t_stack *stack)
{
	int	i;

	i = 0;
	while (i <= stack->last_a)
	{
		stack->array_s[i] = stack->array_a[i];
		i++;
	}
}

int	push_t_b_optim(t_stack *array, int p1, int p2, int c)
{
	if (array->array_a[array->head_a] <= array->array_s[p1]
		&& array->array_a[array->head_a]
		<= array->array_s[p2] && array->size_b >= 2)
	{
		pb(array, "pb\n");
		c++;
		rb(array, "rb\n");
	}
	else if (array->array_a[array->head_a] <= array->array_s[p1])
	{
		pb(array, "pb\n");
		c++;
	}
	else
		ra(array, "ra\n");
	return (c);
}

void	push_to_b_100(t_stack *array, int d)
{
	int	p1;
	int	p2;
	int	c;

	p1 = (array->last_a + 1) / d;
	p2 = p1 / 2;
	c = 0;
	while (array->last_a > 0)
	{
		c = push_t_b_optim(array, p1, p2, c);
		if (c >= p1)
		{
			stacpy(array);
			bubble(array->array_s, array->size_a);
			p1 = array->last_a / d;
			p2 = p1 / 2;
			c = 0;
		}
	}
}

void	push_back_to_a(t_stack *array)
{
	int	max;
	int	idx;
	int	mid;

	while (array->head_b < array->size)
	{
		mid = ((array->size - array->head_b) / 2) + array->head_b;
		max = get_maximum(array);
		idx = get_idx(array);
		if (idx <= mid)
		{
			while (array->array_b[array->head_b] != max)
			{
				rb(array, "rb\n");
			}
		}
		else if (idx > mid)
		{
			while (array->array_b[array->head_b] != max)
			{
				rrb(array, "rrb\n");
			}
		}
		pa(array, "pa\n");
	}
}

void	sort_100_nd_500(t_stack *array, int d)
{
	int	p1;
	int	p2;
	int	index;

	p1 = array->size / d;
	p2 = 0;
	index = 0;
	bubble(array->array_s, array->size_a);
	push_to_b_100(array, d);
	push_back_to_a(array);
}
