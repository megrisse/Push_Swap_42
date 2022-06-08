/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 03:17:35 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/08 03:21:37 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sb(t_stack *stack, char *str)
{
    int tmp;
    
    if (stack->head_a > stack->size - 2)
        return ;
    tmp = stack->array_b[stack->head_b];
    stack->array_b[stack->head_b] = stack->array_b[stack->head_b + 1];
    stack->array_b[stack->head_b + 1] = tmp;
    ft_putstr(str);
}