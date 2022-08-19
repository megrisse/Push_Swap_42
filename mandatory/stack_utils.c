/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:36:04 by megrisse          #+#    #+#             */
/*   Updated: 2022/08/16 19:05:44 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stacks_init(t_stack **tab, int size)
{
	(*tab)->stack_a = (int *) malloc(sizeof(int) * size);
	(*tab)->stack_b = (int *) malloc(sizeof(int) * size);
	(*tab)->stack_s = (int *) malloc(sizeof(int) * size);
	(*tab)->head_a = 0;
	(*tab)->head_b = size;
	(*tab)->last_a = size - 1;
	(*tab)->last_b = size - 1;
	(*tab)->size_a = size;
	(*tab)->size_b = 0;
	(*tab)->size = size;
}

void	push_to_stack(t_stack *array, int value, int i)
{
	array->stack_a[i] = value;
	array->stack_s[i] = value;
}

char	**parse_to_stack(int ac, char **av, int *i)
{
	char	**tab;

	if (ac <= 1)
		exit (0);
	tab = parse_args(ac, av);
	if (check_error(tab) == 1)
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

int	check_if_sorted(t_stack *array)
{
	int	i;

	i = 0;
	while (i < array->last_a)
	{
		if (array->stack_a[i] > array->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	bubble_sort(int *arr, int len)
{
	int	i;
	int	x;

	i = 0;
	while (i < len - 1)
	{
		x = 0;
		while (x < len - i - 1)
		{
			if (arr[x] > arr[x + 1])
				ft_swap(&arr[x], &arr[x + 1]);
			x++;
		}
		i++;
	}
}
