/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:13:43 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/03 16:13:46 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(t_stk *stk)
{
	int tmp;

	if (stk->size <= 1)
		return ;
	tmp = stk->arr[stk->size - 1];
	stk->arr[stk->size - 1] = stk->arr[stk->size - 2];
	stk->arr[stk->size - 2] = tmp;
}

void	ft_swap_both(t_stk *a, t_stk *b)
{
	ft_swap(a);
	ft_swap(b);
}

void	ft_push(t_stk *a, t_stk *b)
{
	if (b->size == 0)
		return ;
	a->arr[a->size] = b->arr[b->size - 1];
	b->arr[b->size - 1] = 0;
	a->size++;
	b->size--;
}
