/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:16:16 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/03 16:16:20 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"

typedef struct	s_stk {
	int *arr;
	int size;
	int top;
}				t_stk;

void			ft_print_stk(t_stk *a, t_stk *b);
int				ft_handle_cmd(char *cmd, t_stk *a, t_stk *b);
void			ft_setup(t_stk *sa, t_stk *sb, int argc);
void			ft_close(t_stk *sa, t_stk *sb);
char			**ft_args(int ac, char *av[]);
void			ft_insert_nums(int c, t_stk *a, t_stk *b, char *argv[]);
void			ft_get_commands(char *command, t_stk *a, t_stk *b);
void			ft_swap(t_stk *stk);
void			ft_swap_both(t_stk *a, t_stk *b);
void			ft_push(t_stk *a, t_stk *b);
void			ft_rotate(t_stk *stk);
void			ft_rotate_both(t_stk *a, t_stk *b);
void			ft_rot_inverse(t_stk *stk);
void			ft_rot_inverse_both(t_stk *a, t_stk *b);
void			ft_three_sort(t_stk *a, t_stk *b);
void			ft_cmd_ntimes(char *cmd, t_stk *a, t_stk *b, int n);
void			ft_three_rot(t_stk *a, t_stk *b);
int				ft_is_all_num(int ac, char *av[]);
int				ft_isduplicate(int ac, char *av[], int v);
int				ft_issorted(int c, t_stk *sa);
int				ft_ismaxthree(int n, int *max);
int				ft_has_space(char *av);
int				ft_av_len(char *av[]);
int				ft_getmax(t_stk *s);
int				ft_getsubmax(t_stk *s, int max);
void			ft_getmaxthree(t_stk *s, int *max);
void			ft_stkmaxthree(t_stk *a, t_stk *b, int *max);
void			ft_base_cond(t_stk *a, t_stk *b, int *max);
void			ft_top_cond(t_stk *a, t_stk *b, int *max);
void			ft_base_cond_b(t_stk *a, t_stk *b, int max);
void			ft_top_cond_b(t_stk *a, t_stk *b, int max);
void			ft_compute_sort(t_stk *a, t_stk *b, int *max);
int				ft_n_moves(t_stk *a, int i);
int				ft_move_dir(t_stk *a, int i);
int				ft_move_me(t_stk *a, t_stk *b);
int				ft_pos_b(t_stk *s, int max);
int				ft_im_max(t_stk *a);
void			ft_exec_move_a(t_stk *a, t_stk *b, int i);
void			ft_exec_move_b(t_stk *a, t_stk *b, int i);
void			ft_sort_b(t_stk *a, t_stk *b);
void			ft_push_to_a(t_stk *a, t_stk *b);
void			ft_sort_large(t_stk *a, t_stk *b);

#endif
