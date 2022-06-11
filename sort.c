/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 23:42:31 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/12 00:22:13 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack *array)
{
	printf("%d\n", array->array_a[0]);
	printf("%d\n", array->array_a[1]);
	printf("%d\n", array->array_a[2]);
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