/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_stacks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:14:48 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/03 16:14:50 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_print_stk(t_stk *a, t_stk *b)
{
	int i;

	i = a->size;
	while (i-- > 0)
	{
		ft_putnbr(a->arr[i]);
		ft_putstr(" | ");
		ft_putnbr(b->arr[i]);
		ft_putstr("\n");
	}
	ft_putstr("-----------------\n");
}

void	ft_setup(t_stk *sa, t_stk *sb, int ac)
{
	sa->arr = malloc(sizeof(int) * (ac));
	sb->arr = malloc(sizeof(int) * (ac));
}

void	ft_close(t_stk *sa, t_stk *sb)
{
	if (sa->arr != NULL)
	{
		free(sa->arr);
		free(sb->arr);
	}
}

void	ft_insert_nums(int c, t_stk *a, t_stk *b, char *av[])
{
	int i;
	int s;

	i = c - 1;
	s = 0;
	while (i >= 0)
	{
		a->arr[s] = ft_atoi(av[i]);
		i--;
		s++;
	}
	a->size = s;
	b->size = 0;
}
