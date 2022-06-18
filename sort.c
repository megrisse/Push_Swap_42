/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 23:42:31 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/12 20:38:08 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack *array)
{
	if (array->array_a[array->head_a] > array->array_a[array->head_a + 1])
		sa(array, "sa\n");
}

void	sort_3(t_stack *array)
{
	while (!is_sortd(array))
	{
		if (array->array_a[array->head_a] > array->array_a[array->last_a])
			ra(array, "ra\n");
		else if (array->array_a[array->head_a]
			> array->array_a[array->head_a + 1])
			sa(array, "sa\n");
		else
			ra(array, "ra\n");
	}
}

void	push_max_nd_min(t_stack *stack)
{
	int	max;
	int	min;
	int	i;

	i = 0;
	max = get_maximum(stack);
	min = get_minimum(stack);
	while (i < 2)
	{
		if (stack->array_a[stack->head_a] == max
			|| stack->array_a[stack->head_a] == min)
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
	push_max_nd_min(stack);
	sort_3(stack);
	while (stack->head_b < stack->size)
	{
		if (stack->array_b[stack->head_b] > stack->array_a[stack->head_a])
		{
			pa(stack, "pa\n");
			ra(stack, "ra\n");
		}
		else
			pa(stack, "pa\n");
	}
}