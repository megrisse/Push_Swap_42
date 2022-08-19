/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:36:46 by megrisse          #+#    #+#             */
/*   Updated: 2022/08/16 18:55:14 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_minimum(t_stack *array)
{
	int	minimum;
	int	i;

	minimum = array->stack_a[0];
	i = 1;
	while (i <= array->last_a)
	{
		if (array->stack_a[i] < minimum)
			minimum = array->stack_a[i];
		i++;
	}
	return (minimum);
}

int	get_maximum_3(t_stack *array)
{
	int	maximum;
	int	i;

	maximum = array->stack_a[0];
	i = 1;
	while (i <= array->last_a)
	{
		if (array->stack_a[i] > maximum)
			maximum = array->stack_a[i];
		i++;
	}
	return (maximum);
}

int	get_maximum(t_stack *array)
{
	int	maximum;
	int	i;

	maximum = array->stack_b[array->head_b];
	i = array->head_b + 1;
	while (i <= array->last_b)
	{
		if (array->stack_b[i] > maximum)
			maximum = array->stack_b[i];
		i++;
	}
	return (maximum);
}

int	get_max_idx(t_stack *array)
{
	int	maximum;
	int	idx;
	int	i;

	maximum = array->stack_b[array->head_b];
	i = array->head_b + 1;
	while (i <= array->last_b)
	{
		if (array->stack_b[i] > maximum)
		{
			maximum = array->stack_b[i];
			idx = i;
		}
		i++;
	}
	return (idx);
}

int	*ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
	return (0);
}
