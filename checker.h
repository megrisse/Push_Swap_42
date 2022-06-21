/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 21:01:57 by megrisse          #+#    #+#             */
/*   Updated: 2022/06/21 02:13:40 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include "./push_swap.h"

void	rr_b(t_stack *array);
void	ss(t_stack *array, char *str);
void	rrr(t_stack *array);
void	read_instructions(t_stack *array, char *arg);
char	*get_next_line(int fd);

#endif