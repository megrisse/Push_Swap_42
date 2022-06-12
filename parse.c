/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:28:49 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/12 02:41:27 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_double(char **t)
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

int	check_array(char **tab)
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
			if (!ft_isdigit(tab[i][x]) || is_double(tab) == 0
				|| ft_atoi(&tab[i][x]) < PS_MIN
				|| ft_atoi(&tab[i][x]) > PS_MAX)
				return (0);
			while (ft_isdigit(tab[i][x]) == 1)
			{
				if (tab[i][x + 1] == '-' || tab[i][x + 1] == '+')
					return (0);
				x++;
			}
		}
		i++;
	}
	return (1);
}

static	size_t	count_espace(char *av)
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

static	int	check_args(char **tab)
{
	int	i;

	i = 1;
	while (tab[i])
	{
		if (ft_strlen(tab[i]) == count_espace(tab[i]))
			return (0);
		i++;
	}
	return (1);
}

char	**get_args(int ac, char **av)
{
	char	**tab;
	char	*str;
	char	*arg;
	int		i;

	i = 1;
	str = (char *)malloc(1 * sizeof(char));
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