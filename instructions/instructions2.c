/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 02:56:35 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/12 04:55:47 by megrisse         ###   ########.fr       */
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

	maximum = array->array_a[0];
	i = 1;
	while (i <= array->last_a)
	{
		if (array->array_a[i] > maximum)
			maximum = array->array_a[i];
		i++;
	}
	return (maximum);
}