/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:17:07 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/03 16:17:09 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_base_cond_b(t_stk *a, t_stk *b, int max)
{
	if (b->size > 0)
	{
		if (b->size == 1)
			ft_cmd_ntimes("pa", a, b, 1);
		else if ((b->arr[0] == max) && (b->size > 1))
		{
			ft_cmd_ntimes("rrb", a, b, 1);
			ft_cmd_ntimes("pa", a, b, 1);
		}
		else if (b->arr[1] == max && b->size > 2)
		{
			ft_cmd_ntimes("rrb", a, b, 2);
			ft_cmd_ntimes("pa", a, b, 1);
		}
	}
}

void	ft_three_rot(t_stk *a, t_stk *b)
{
	if ((a->arr[0] < a->arr[a->size - 1])
		&& (a->arr[a->size - 1] < a->arr[a->size - 2])
		&& (ft_getmax(b) != b->arr[b->size - 1]))
	{
		ft_cmd_ntimes("rrr", a, b, 1);
	}
	else
	{
		ft_three_sort(a, b);
	}
}

void	ft_top_cond_b(t_stk *a, t_stk *b, int max)
{
	if (b->size > 0)
	{
		if (b->arr[b->size - 1] == max)
			ft_cmd_ntimes("pa", a, b, 1);
		else if ((b->arr[b->size - 1] != max) && (b->arr[b->size - 2] == max))
			ft_cmd_ntimes("sb", a, b, 1);
		else
			ft_cmd_ntimes("rb", a, b, 1);
	}
}

void	ft_five_sort(t_stk *a, t_stk *b, int *max)
{
	int	max_b;

	while (a->size > 3)
	{
		ft_top_cond(a, b, max);
		ft_base_cond(a, b, max);
	}
	ft_three_rot(a, b);
	while ((b->size > 0))
	{
		max_b = ft_getmax(b);
		ft_base_cond_b(a, b, max_b);
		ft_top_cond_b(a, b, max_b);
	}
}

void	ft_compute_sort(t_stk *a, t_stk *b, int *max)
{
	if (a->size > 5)
		ft_sort_large(a, b);
	else
		ft_five_sort(a, b, max);
}
