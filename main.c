/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:36:34 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/21 21:13:30 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	read_args(t_stack *array)
{
	char	*tab;

	tab = get_next_line(0);
	while (tab)
	{
		read_instructions(array, tab);
		free(tab);
		tab = get_next_line(0);
	}
	free(tab);
}

int	main(int ac, char **av)
{
	char	**tab;
	t_stack	*array;
	int		i;
	int		x;

	array = (t_stack *) malloc(sizeof(*array));
	tab = parse_to_stack(ac, av, &i);
	array->size = i;
	array = init_stacks(i);
	x = -1;
	while (++x < i)
		push(array, ft_atoi(tab[x]), x);
	read_args(array);
	if (is_sortd(array) == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
