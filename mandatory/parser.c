/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:35:50 by megrisse          #+#    #+#             */
/*   Updated: 2022/08/16 17:53:13 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_double(char **t)
{
	int	i;
	int	x;

	i = 0;
	while (t[i])
	{
		x = i + 1;
		while (t[x])
		{
			if (ft_atoi(t[i]) == ft_atoi(t[x]))
				return (0);
			x++;
		}
		i++;
	}
	return (1);
}

int	check_error(char **tab)
{
	int	i;
	int	x;

	i = 0;
	while (tab[i])
	{
		x = 0;
		while (tab[i][x])
		{
			if (tab[i][x] == '-' || tab[i][x] == '+')
				x++;
			if (!ft_isdigit(tab[i][x]) || check_double(tab) == 0)
				return (1);
			while (ft_isdigit(tab[i][x]) == 1)
			{
				if (tab[i][x + 1] == '-' || tab[i][x + 1] == '+')
					return (1);
				x++;
			}
		}
		i++;
	}
	return (0);
}

size_t	count_spaces(char *av)
{
	int		i;
	size_t	x;

	i = 0;
	x = 0;
	while (av[i])
	{
		if (av[i] == 32)
			x++;
		i++;
	}
	return (x);
}

int	check_args(char **tab)
{
	int	i;

	i = 1;
	while (tab[i])
	{
		if (ft_strlen(tab[i]) == count_spaces(tab[i]))
			return (0);
		i++;
	}
	return (1);
}

char	**parse_args(int ac, char **av)
{
	char	**tab;
	char	*str;
	char	*arg;
	int		i;

	i = 1;
	str = (char *)malloc(sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '\0';
	if (check_args(av) == 0)
	{
		write (2, "Error\n", 6);
		exit (1);
	}
	while (i < ac)
	{
		arg = ft_strjoin(str, av[i++]);
		free (str);
		str = ft_strjoin(arg, " ");
		free(arg);
	}
	tab = ft_split(str, ' ');
	free (str);
	return (tab);
}
