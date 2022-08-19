/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 23:21:42 by megrisse          #+#    #+#             */
/*   Updated: 2022/08/15 23:47:43 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include "../mandatory/push_swap.h"

int		ft_strcmp(char *s1, char *s2);
void	ss(t_stack *array, char *str);
void	rr_b(t_stack *array);
void	rrr(t_stack *array);
void	print_error(void);
char	*get_next_line(int fd);

#endif