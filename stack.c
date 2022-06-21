/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:08:55 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/21 21:13:38 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_stacks(int size)
{
	t_stack	*tab;

	tab = (t_stack *) malloc(sizeof(*tab));
	tab->array_a = (int *) malloc(sizeof(int) * size);
	tab->array_b = (int *) malloc(sizeof(int) * size);
	tab->array_s = (int *) malloc(sizeof(int) * size);
	tab->head_a = 0;
	tab->head_b = size;
	tab->last_a = size - 1;
	tab->last_b = size - 1;
	tab->size_a = size;
	tab->size_b = 0;
	tab->size = size;
	return (tab);
}

void	push(t_stack *array, int value, int i)
{
	array->array_a[i] = value;
	array->array_s[i] = value;
}

char	**parse_to_stack(int ac, char **av, int *i)
{
	char	**tab;

	if (ac <= 1)
		exit (0);
	tab = get_args(ac, av);
	if (check_array(tab) == 0)
	{
		write (2, "Error\n", 6);
		exit (1);
	}
	while (tab[*i])
	{
		(*i)++;
	}
	return (tab);
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

void	bubble(int *arr, int n)
{
	int	i;
	int	x;

	i = 0;
	while (i < n - 1)
	{
		x = 0;
		while (x < n - i - 1)
		{
			if (arr[x] > arr[x + 1])
				ft_swap(&arr[x], &arr[x + 1]);
			x++;
		}
		i++;
	}
}
