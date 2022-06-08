/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 03:39:27 by megrisse          #+#    #+#             */
/*   Updated: 2022/05/19 21:58:37 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	int				x;

	ptr = (unsigned char *) s;
	x = 0;
	while (n > 0)
	{
		ptr[x] = 0;
		x++;
		n--;
	}
}
