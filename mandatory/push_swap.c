/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:35:54 by megrisse          #+#    #+#             */
/*   Updated: 2022/08/16 19:05:19 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_stack *array)
{
	free(array->stack_s);
	free(array->stack_a);
	free(array->stack_b);
	free(array);
}

void	norm(t_stack *array, int count)
{
	if (check_if_sorted(array) == 1)
		return ;
	if (count <= 1)
		return ;
	else if (count == 2)
		sort_2(array);
	else if (count == 3)
		sort_3(array);
	else if (count <= 5)
		sort_5(array);
	else if (count <= 100)
		sort_middle_nd_advance(array, 3);
	else
		sort_middle_nd_advance(array, 5);
}

int	main(int ac, char **av)
{
	char		**tab;
	t_stack		*array;
	int			count;
	int			i;
	int			j;

	array = (t_stack *) malloc(sizeof(*array));
	tab = parse_to_stack(ac, av, &i);
	count = i;
	array->size = i;
	stacks_init(&array, i);
	j = -1;
	while (++j < i)
		push_to_stack(array, ft_atoi(tab[j]), j);
	norm(array, count);
	ft_free(array);
}
