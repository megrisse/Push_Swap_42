/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 20:13:27 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/18 05:04:18 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b_100(t_stack *array, int min, int avg)
{
	while (array->size_b <= min + avg)
	{
		if (array->array_a[array->head_a] <= avg + min)
			pb(array, "pb\n");
		else if (array->array_b[array->head_b] >= min
			&& array->array_b[array->head_b] <= min + avg / 2)
			rr(array, "\n");
		else
			ra(array, "ra\n");
		if (array->array_b[array->head_b] >= min
			&& array->array_b[array->head_b] <= min + avg / 2)
			rb(array, "rb\n");
	}
	for(int i = array->head_b; i < array->size; i++)
	{
		printf("%d\n", array->array_b[i]);
	}
	sleep(15);
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

void	push_back_to_a(t_stack *array, int index)
{
	while (array->head_b < array->size)
	{
		index = find_value_in_b(array->array_a[array->head_a] - 1, array);
		if (index <= array->size_b / 2)
		{
			while (array->array_b[array->head_b]
				!= array->array_a[array->head_a] - 1)
			{
				rb(array, "rb\n");
			printf("%d\n", array->array_b[array->head_b]);
			printf("%d\n", array->array_a[array->head_a] - 1);
				sleep(2);
			}
			pa(array, "pa\n");
		}
		else
		{
			optim_push_back(array);
		}
		while (array->array_a[array->head_a] - 1
			== array->array_a[array->last_a])
			rra(array, "rra\n");
	}
}

void	sort_100_nd_500(t_stack *array, int d)
{
	int	min;
	int	avg;
	int	index;

	min = 0;
	avg = array->last_a / d;
	index = 0;
	for (int i = 0; i <= array->last_a; i++)
	{
		printf("stack a : %d\n", array->array_a[i]);
		printf("stack b : %d\n", array->array_b[i]);
	}
	while (array->size_a > 3)
	{
		push_to_b_100(array, min, avg);
		min += avg;
		avg = array->last_a / d;
		if (d > 3)
			d--;
		if (avg < 5)
			avg = array->size_a - 3;
	}
	sort_3(array);
	push_back_to_a(array, index);
}
