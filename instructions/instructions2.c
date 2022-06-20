/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 02:56:35 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/20 02:33:40 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_minimum(t_stack *array)
{
	int	minimum;
	int	i;

	minimum = array->array_a[0];
	i = 1;
	while (i <= array->last_a)
	{
		if (array->array_a[i] < minimum)
			minimum = array->array_a[i];
		i++;
	}
	return (minimum);
}

int	get_maximum(t_stack *array)
{
	int	maximum;
	int	i;

	maximum = array->array_b[array->head_b];
	i = array->head_b + 1;
	while (i <= array->last_b)
	{
		if (array->array_b[i] > maximum)
			maximum = array->array_b[i];
		i++;
	}
	return (maximum);
}

int	get_idx(t_stack *array)
{
	int	maximum;
	int idx;
	int	i;

	maximum = array->array_b[array->head_b];
	i = array->head_b + 1;
	while (i <= array->last_b)
	{
		if (array->array_b[i] > maximum)
		{
			maximum = array->array_b[i];
			idx = i;
		}
		i++;
	}
	return (idx);
}

int	find_value_in_b(int value, t_stack *array)
{
	int	i;

	i = array->head_b;
	while (i <= array->last_b)
	{
		if (array->array_b[i] == value)
			return (i - array->head_b);
		i++;
	}
	return (0);
}

int	*ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
	return (0);
}