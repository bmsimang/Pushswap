/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:13:06 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/03 16:13:10 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_argc(int argc, t_stk *s, int cmd)
{
	if (s->arr != NULL)
	{
		if ((ft_issorted(argc, s) == 1) && (argc > 1) && (cmd == 1))
			ft_putstr("OK\n");
		else if ((ft_issorted(argc, s) == 1) && (argc > 1) && (cmd == 0))
			ft_putstr("OK\n");
		else if ((ft_issorted(argc, s) == 0) && (argc > 1) && (cmd == 1))
			ft_putstr("KO\n");
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
}

void	ft_process_cmds(char *cmd, int argc, t_stk *a, t_stk *b)
{
	int		iscommand;

	iscommand = 0;
	while (get_next_line(0, &cmd))
	{
		iscommand = ft_handle_cmd(cmd, a, b);
		if (iscommand == 0)
			break ;
	}
	ft_argc(argc, a, iscommand);
}

int		main(int ac, char **argv)
{
	t_stk	sa;
	t_stk	sb;
	char	*command;
	char	**nums;
	int		argc;

	command = NULL;
	nums = ft_args(ac, argv);
	argc = ft_av_len(nums);
	ft_setup(&sa, &sb, argc);
	if (ft_is_all_num(argc, nums) == 1)
	{
		if (ac > 1)
		{
			ft_insert_nums(argc, &sa, &sb, nums);
			ft_process_cmds(command, argc, &sa, &sb);
		}
	}
	else
		ft_putstr("Error\n");
	ft_close(&sa, &sb);
	free(nums);
	return (0);
}
