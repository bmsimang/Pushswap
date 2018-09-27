/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:17:20 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/03 16:17:23 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_im_max(t_stk *a)
{
	int i;
	int item;

	i = 0;
	item = 0;
	while (i < a->size)
	{
		if (a->arr[i] == ft_getmax(a))
		{
			item = i;
			break ;
		}
		i++;
	}
	return (item);
}

int		ft_n_moves(t_stk *a, int i)
{
	int moves;
	int mid;

	moves = 0;
	mid = a->size / 2;
	if (a->size > 1)
	{
		if (i == (a->size - 1))
			moves = 0;
		else if (i >= mid)
			moves = a->size - 1 - i;
		else
			moves = i + 1;
	}
	return (moves);
}

int		ft_move_dir(t_stk *a, int i)
{
	int dir;
	int mid;

	dir = -1;
	mid = a->size / 2;
	if (i == (a->size - 1))
		dir = 0;
	else if (i >= mid)
		dir = 1;
	return (dir);
}

void	ft_exec_move_a(t_stk *a, t_stk *b, int i)
{
	int dir;
	int steps_a;

	dir = ft_move_dir(a, i);
	steps_a = ft_n_moves(a, i);
	if (dir > 0)
		ft_cmd_ntimes("ra", a, b, steps_a);
	else if (dir < 0)
		ft_cmd_ntimes("rra", a, b, steps_a);
}

void	ft_exec_move_b(t_stk *a, t_stk *b, int i)
{
	int dir;
	int steps_b;

	dir = ft_move_dir(b, i);
	steps_b = ft_n_moves(b, i);
	if (i < 0)
		return ;
	if (dir > 0)
		ft_cmd_ntimes("rb", a, b, steps_b);
	else if (dir < 0)
		ft_cmd_ntimes("rrb", a, b, steps_b);
}
