/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:13:56 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/03 16:14:02 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate(t_stk *stk)
{
	int tmp;
	int i;

	if (stk->size <= 1)
		return ;
	tmp = stk->arr[stk->size - 1];
	i = stk->size;
	while (i-- > 0)
	{
		stk->arr[i] = stk->arr[i - 1];
	}
	stk->arr[0] = tmp;
}

void	ft_rotate_both(t_stk *a, t_stk *b)
{
	ft_rotate(a);
	ft_rotate(b);
}

void	ft_rot_inverse(t_stk *stk)
{
	int tmp;
	int i;

	i = 0;
	if (stk->size <= 1)
		return ;
	tmp = stk->arr[0];
	i = -1;
	while (i++ < (stk->size - 1))
		stk->arr[i] = stk->arr[i + 1];
	stk->arr[stk->size - 1] = tmp;
}

void	ft_rot_inverse_both(t_stk *a, t_stk *b)
{
	ft_rot_inverse(a);
	ft_rot_inverse(b);
}
