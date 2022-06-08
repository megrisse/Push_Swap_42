/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:00:22 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/08 03:29:05 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**parse_to_stack(int ac, char **av, int *i)
{
	char	**tab;

	if (ac <= 1)
		exit (1);
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

int main(int ac, char **av)
{
    char        **tab;
    t_stack    *array;
    int         count;
    int         i;
    int         j = -1;
    
    array = (t_stack *) malloc(sizeof(*array));
    tab = parse_to_stack(ac, av, &i);
    count = i;
    array = init_stacks(i);
    while (++j < i)
        push(array, ft_atoi(tab[j]));
    if (count == 0)
        return (0);
    
}
    
