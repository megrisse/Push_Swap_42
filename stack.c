/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:08:55 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/11 23:52:10 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *init_stacks(int size)
{
	t_stack *tab;

	tab = (t_stack *) malloc(sizeof(*tab));
	tab->array_a = (int *) malloc(sizeof(int) * size);
	tab->array_b = (int *) malloc(sizeof(int) * size);
	tab->array_s = (int *) malloc(sizeof(int) * size);
	tab->head_a = 0;
	tab->head_b = size;
	tab->last_a = size - 1;
	tab->last_b = size - 1;
	tab->size_a = tab->size;
	tab->size_b = 0;
	return (tab);
}

void	push(t_stack *array, int value)
{
	if (array->last_a == array->size - 1)
		return ;
	array->array_a[array->last_a] = value;
}

int	is_sortd(t_stack *array)
{
	int	i;

	i = 0;
	while (i < array->last_a)
	{
		if (array->array_a[i] > array->array_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}