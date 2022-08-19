/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 23:23:27 by megrisse          #+#    #+#             */
/*   Updated: 2022/08/16 00:00:18 by megrisse         ###   ########.fr       */
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

void	print_error(void)
{
	write(1, "ERROR\n", 6);
	exit(0);
}

void	ss(t_stack *array, char *str)
{
	sa(array, "");
	sb(array, "");
	ft_putstr(str);
}

void	rr_b(t_stack *array)
{
	ra(array, "");
	rb(array, "");
}

void	rrr(t_stack *array)
{
	rra(array, "");
	rrb(array, "");
}
