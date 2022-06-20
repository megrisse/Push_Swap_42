/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:00:22 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/20 03:03:49 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	array = init_stacks(ac - 1);
	j = -1;
	while (++j < i)
		push(array, ft_atoi(tab[j]), j);
	if (count <= 1)
		return (0);
	else if (count == 2)
		sort_2(array);
	else if (count == 3)
		sort_3(array);
	else if (count <= 5)
		sort_5(array);
	else if (count <= 100)
		sort_100_nd_500(array, 3);
	else if (count <= 500)
		sort_100_nd_500(array, 5);	
}
