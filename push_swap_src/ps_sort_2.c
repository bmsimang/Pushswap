/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:16:54 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/03 16:16:58 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_base_cond(t_stk *a, t_stk *b, int *max)
{
	if (ft_ismaxthree(a->arr[0], max) == 0)
	{
		if ((b->size > 1) && (a->arr[0] > ft_getmax(b))
			&& (b->arr[0] == ft_getmax(b)))
			ft_cmd_ntimes("rrr", a, b, 1);
		else
			ft_cmd_ntimes("rra", a, b, 1);
		ft_cmd_ntimes("pb", a, b, 1);
	}
}

void	ft_top_cond(t_stk *a, t_stk *b, int *max)
{
	if ((ft_ismaxthree(a->arr[a->size - 1], max) == 1)
		&& (ft_ismaxthree(a->arr[a->size - 2], max) == 0))
	{
		if ((b->size > 1) && (b->arr[b->size - 2] == ft_getmax(b)))
			ft_cmd_ntimes("ss", a, b, 1);
		else
			ft_cmd_ntimes("sa", a, b, 1);
	}
	else if ((ft_ismaxthree(a->arr[a->size - 1], max) == 1))
	{
		if ((b->size > 1) && (b->arr[b->size - 2] == ft_getmax(b)))
			ft_cmd_ntimes("rr", a, b, 1);
		else
			ft_cmd_ntimes("ra", a, b, 1);
	}
	else if (ft_ismaxthree(a->arr[a->size - 1], max) == 0)
	{
		ft_cmd_ntimes("pb", a, b, 1);
	}
}

void	ft_stkmaxthree(t_stk *a, t_stk *b, int *max)
{
	int max_b;

	max_b = 0;
	while (a->size > 3)
	{
		ft_top_cond(a, b, max);
		ft_base_cond(a, b, max);
	}
	ft_three_rot(a, b);
	while ((b->size > 0))
	{
		max_b = ft_getmax(b);
		ft_top_cond_b(a, b, max_b);
		ft_base_cond_b(a, b, max_b);
	}
}

void	ft_cmd_ntimes(char *cmd, t_stk *a, t_stk *b, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (ft_handle_cmd(cmd, a, b))
		{
			ft_putstr(cmd);
			ft_putstr("\n");
		}
		i++;
	}
}
