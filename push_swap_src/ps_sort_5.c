/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:17:32 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/03 16:17:34 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_move_me(t_stk *a, t_stk *b)
{
	int i;
	int item;
	int moves;
	int moves_2;

	i = 0;
	item = 0;
	moves = ft_n_moves(a, i) + ft_n_moves(b, ft_pos_b(b, a->arr[i]));
	while (i < a->size)
	{
		moves_2 = ft_n_moves(a, i) + ft_n_moves(b, ft_pos_b(b, a->arr[i]));
		if (moves_2 <= moves)
		{
			item = i;
			moves = moves_2;
		}
		i++;
	}
	return (item);
}

int		ft_pos_b(t_stk *s, int max)
{
	int i;
	int p;

	i = 0;
	p = -1;
	while (i < s->size)
	{
		if ((s->arr[p] < s->arr[i]) && (s->arr[i] < max))
			p = i;
		i++;
	}
	return (p);
}

void	ft_push_to_a(t_stk *a, t_stk *b)
{
	int dir;

	dir = ft_move_dir(b, ft_im_max(b));
	while (ft_getmax(b) != b->arr[b->size - 1])
	{
		if (dir > 0)
			ft_cmd_ntimes("rb", a, b, 1);
		else if (dir < 0)
			ft_cmd_ntimes("rrb", a, b, 1);
	}
	while (b->size > 0)
	{
		if (ft_getmax(b) == b->arr[b->size - 1])
			ft_cmd_ntimes("pa", a, b, 1);
		else
			ft_exec_move_b(a, b, ft_im_max(b));
	}
}

void	ft_sort_b(t_stk *a, t_stk *b)
{
	int item_a;
	int item_b;

	item_a = ft_move_me(a, b);
	item_b = ft_pos_b(b, a->arr[item_a]);
	ft_exec_move_a(a, b, item_a);
	ft_exec_move_b(a, b, item_b);
	ft_cmd_ntimes("pb", a, b, 1);
}

void	ft_sort_large(t_stk *a, t_stk *b)
{
	if (b->size == 0)
		ft_cmd_ntimes("pb", a, b, 2);
	while (a->size > 0)
		ft_sort_b(a, b);
	ft_push_to_a(a, b);
}
