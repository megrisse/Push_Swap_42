/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 20:13:27 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/20 03:03:03 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stacpy(t_stack *stack)
{
	int i = 0;
	while (i <= stack->last_a)
	{
		stack->array_s[i] = stack->array_a[i];
		i++;
	}
}

void	push_to_b_100(t_stack *array)
{
	int	p1;
	int	p2;
	int	c = 0;
	
	p1 = (array->last_a + 1) / 3;
	p2 = p1 / 2;
	while (array->last_a > 0)
	{
		if (array->array_a[array->head_a] <= array->array_s[p1] && array->array_a[array->head_a] <= array->array_s[p2] && array->size_b >= 2)
		{
			pb(array, "pb\n");
			c++;
			// puts("tab b : ");
			// printArray(array->array_b, array->size);
			rb(array, "rb\n");
			// puts("tab b : ");
			// printArray(array->array_b, array->size);
		}
		else if (array->array_a[array->head_a] <= array->array_s[p1])
		{
			pb(array, "pb\n");
			c++;
		// 	puts("tab b : ");
		// 	printArray(array->array_b, array->size);
		}
		else
			ra(array, "ra\n");
		if (c >= p1)
		{
			stacpy(array);
			bubble(array->array_s, array->size_a);
			p1 = array->last_a / 3;
			p2 = p1 / 2;
			c = 0;
		}
	}
}

void	optim_push_back(t_stack *array)
{
	while (array->array_b[array->head_b] != array->array_a[array->head_a] - 1)
	{
		if ((array->array_a[array->head_a] < array->array_a[array->last_a]
			|| array->array_a[array->last_a] < array->array_b[array->head_b]))
		{
			pa(array, "pa\n");
			ra(array, "ra\n");
		}
		rrb(array, "rrb\n");
	}
	pa(array, "pa\n");
}

void	push_back_to_a(t_stack *array)
{
	int max;
	int idx;
	int mid;
	while (array->head_b < array->size)
	{
		mid = ((array->size - array->head_b) / 2) + array->head_b;
		max = get_maximum(array);
		idx = get_idx(array);
		if (idx <= mid)
		{
			while(array->array_b[array->head_b] != max)
			{
				rb(array, "rb\n");
			}
		}
		else if (idx > mid)
		{
			while(array->array_b[array->head_b] != max)
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
	int p2;
	int	index;

	p1 = array->size / d;
	p2 = 0;
	index = 0;
	bubble(array->array_s, array->size_a);
	push_to_b_100(array);
	push_back_to_a(array);
}