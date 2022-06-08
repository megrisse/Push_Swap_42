/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 05:22:33 by megrisse          #+#    #+#             */
/*   Updated: 2022/05/23 04:24:42 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	x = 0;
	while (src[x] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[x]));
}
