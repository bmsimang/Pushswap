/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:14:30 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/03 16:14:32 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	**ft_args(int ac, char *av[])
{
	char	**args;
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (ac == 2)
	{
		if (ft_has_space(av[1]) == 1)
		{
			return (ft_strsplit(av[1], ' '));
		}
	}
	args = (char**)malloc(sizeof(*args) * ac);
	while (av[i] != '\0')
	{
		args[j] = av[i];
		i++;
		j++;
	}
	args[j] = NULL;
	return (args);
}

int		ft_has_space(char *av)
{
	int	i;

	i = 0;
	while (av[i] != '\0')
	{
		if (av[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

int		ft_av_len(char *av[])
{
	int	i;

	i = 0;
	while (av[i] != '\0')
		i++;
	return (i);
}
