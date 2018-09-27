/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:15:39 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/03 16:15:44 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_isduplicate(int ac, char *av[], int v)
{
	int i;

	i = 0;
	while (i < ac)
	{
		if (i == v)
			i++;
		if (ft_strequ(av[i], av[v]))
			return (1);
		i++;
	}
	return (0);
}

int		ft_isoverflow(char *n)
{
	if ((n[0] == '-') && (ft_atoi(n) > 0))
		return (1);
	else if ((n[0] != '-') && (ft_atoi(n) < 0))
		return (1);
	return (0);
}

int		ft_is_all_num(int ac, char *av[])
{
	int i;
	int j;

	i = 0;
	while (i < ac)
	{
		j = 0;
		if ((ft_isduplicate(ac, av, i) == 1) || (ft_isoverflow(av[i]) == 1))
			return (0);
		while (av[i][j] != '\0')
		{
			if ((av[i][j] == '-' || av[i][j] == '+') && (j == 0))
				j++;
			if ((ft_isdigit(av[i][j]) == 0))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_issorted(int c, t_stk *sa)
{
	int i;

	i = c - 1;
	while (i >= 0)
	{
		if (((i - 1) >= 0) && ((sa->arr[i]) > (sa->arr[i - 1])))
			return (0);
		i--;
	}
	return (1);
}

int		ft_ismaxthree(int n, int *max)
{
	int i;

	i = 0;
	while (i < 3)
	{
		if (n == max[i])
			return (1);
		i++;
	}
	return (0);
}
