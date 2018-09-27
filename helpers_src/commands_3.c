/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:14:16 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/03 16:14:19 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_handle_swaps(char *cmd, t_stk *a, t_stk *b)
{
	if (ft_strequ(cmd, "sa"))
		ft_swap(a);
	else if (ft_strequ(cmd, "sb"))
		ft_swap(b);
	else if (ft_strequ(cmd, "ss"))
		ft_swap_both(a, b);
	else if (ft_strequ(cmd, "pa"))
		ft_push(a, b);
	else if (ft_strequ(cmd, "pb"))
		ft_push(b, a);
	else
		return (0);
	return (1);
}

int		ft_handle_rotates(char *cmd, t_stk *a, t_stk *b)
{
	if (ft_strequ(cmd, "ra"))
		ft_rotate(a);
	else if (ft_strequ(cmd, "rb"))
		ft_rotate(b);
	else if (ft_strequ(cmd, "rr"))
		ft_rotate_both(a, b);
	else if (ft_strequ(cmd, "rra"))
		ft_rot_inverse(a);
	else if (ft_strequ(cmd, "rrb"))
		ft_rot_inverse(b);
	else if (ft_strequ(cmd, "rrr"))
		ft_rot_inverse_both(a, b);
	else
		return (0);
	return (1);
}

int		ft_handle_cmd(char *cmd, t_stk *a, t_stk *b)
{
	int swp;
	int rot;

	swp = ft_handle_swaps(cmd, a, b);
	rot = ft_handle_rotates(cmd, a, b);
	if ((swp == 0) && (rot == 0))
	{
		return (0);
	}
	return (1);
}
