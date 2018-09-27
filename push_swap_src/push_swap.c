/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:17:49 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/03 16:18:02 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int ac, char *argv[])
{
	t_stk	sa;
	t_stk	sb;
	int		max[3];
	char	**nums;
	int		argc;

	nums = ft_args(ac, argv);
	argc = ft_av_len(nums);
	if (argc >= 2 && ft_is_all_num(argc, nums))
	{
		ft_setup(&sa, &sb, argc);
		ft_insert_nums(argc, &sa, &sb, nums);
		ft_getmaxthree(&sa, max);
		if (sa.size <= 3)
		{
			ft_three_sort(&sa, &sb);
		}
		else if (sa.size > 3 && (ft_issorted(argc, &sa) == 0))
		{
			ft_compute_sort(&sa, &sb, max);
		}
		ft_close(&sa, &sb);
	}
	free(nums);
	return (0);
}
