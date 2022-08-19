/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 08:17:44 by megrisse          #+#    #+#             */
/*   Updated: 2022/08/16 18:18:34 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(void)
{
	write (1, "ERROR\n", 6);
	exit (0);
}

int	ft_atoi(char *str)
{
	int		x;
	int		signe;
	long	rst;

	x = 0;
	signe = 1;
	rst = 0;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == 32)
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			signe *= -1;
		x++;
	}
	while (str[x] >= 48 && str[x] <= 57)
	{
		rst = rst * 10 + (str[x++] - 48);
	}
	if ((rst * signe) > INT_MAX || (rst * signe) < INT_MIN)
		ft_error();
	return (rst * signe);
}
