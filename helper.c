/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 21:26:39 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/21 21:13:09 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_error(void)
{
	write(1, "ERROR\n", 6);
	exit(0);
}

void	read_instructions(t_stack *array, char *arg)
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
		ft_error();
}
