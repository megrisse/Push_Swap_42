/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 23:23:38 by megrisse          #+#    #+#             */
/*   Updated: 2022/08/18 18:59:39 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	do_instructions(t_stack *array, char *arg)
{
	if (ft_strcmp(arg, "sa\n") == 0)
		sa(array, "");
	else if (ft_strcmp(arg, "sb\n") == 0)
		sb(array, "");
	else if (ft_strcmp(arg, "ss\n") == 0)
		ss(array, "");
	else if (ft_strcmp(arg, "pb\n") == 0)
		pb(array, "");
	else if (ft_strcmp(arg, "pa\n") == 0)
		pa(array, "");
	else if (ft_strcmp(arg, "ra\n") == 0)
		ra(array, "");
	else if (ft_strcmp(arg, "rb\n") == 0)
		rb(array, "");
	else if (ft_strcmp(arg, "rr\n") == 0)
		rr_b(array);
	else if (ft_strcmp(arg, "rra\n") == 0)
		rra(array, "");
	else if (ft_strcmp(arg, "rrb\n") == 0)
		rrb(array, "");
	else if (ft_strcmp(arg, "rrr\n") == 0)
		rrr(array);
	else
		print_error();
}

void	get_args(t_stack *array)
{
	char	*tab;

	tab = get_next_line(0);
	while (tab)
	{
		do_instructions(array, tab);
		free(tab);
		tab = get_next_line(0);
	}
	free(tab);
}

int	main(int ac, char **av)
{
	char		**tab;
	t_stack		*stack;
	int			i;
	int			j;

	stack = (t_stack *) malloc(sizeof(*stack));
	tab = parse_to_stack(ac, av, &i);
	stack->size = i;
	stacks_init(&stack, i);
	j = -1;
	while (++j < i)
		push_to_stack(stack, ft_atoi(tab[j]), j);
	get_args(stack);
	if (check_if_sorted(stack) == 1)
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
}
