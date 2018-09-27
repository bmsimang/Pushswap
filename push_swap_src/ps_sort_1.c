/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:16:42 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/03 16:16:44 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_getmax(t_stk *s)
{
	int i;
	int max;

	i = 0;
	max = s->arr[0];
	while (i < s->size)
	{
		if (max < s->arr[i])
			max = s->arr[i];
		i++;
	}
	return (max);
}

int		ft_getsubmax(t_stk *s, int max)
{
	int i;
	int smax;

	i = 0;
	smax = s->arr[0];
	while (i < s->size)
	{
		if ((smax > s->arr[i]) && (s->arr[i] < max) && (smax == max))
			smax = s->arr[i];
		else if ((smax < s->arr[i]) && (s->arr[i] < max) && (smax != max))
			smax = s->arr[i];
		else if ((smax > s->arr[i]) && (s->arr[i] < max) && (smax > max))
			smax = s->arr[i];
		i++;
	}
	return (smax);
}

void	ft_getmaxthree(t_stk *s, int *max)
{
	max[0] = ft_getmax(s);
	max[1] = ft_getsubmax(s, max[0]);
	max[2] = ft_getsubmax(s, max[1]);
}

void	ft_three_sort(t_stk *a, t_stk *b)
{
	while (1)
	{
		if (ft_issorted(a->size, a) == 1)
			break ;
		if (a->arr[0] < a->arr[a->size - 1])
		{
			ft_cmd_ntimes("ra", a, b, 1);
		}
		else
		{
			ft_cmd_ntimes("sa", a, b, 1);
		}
	}
}
