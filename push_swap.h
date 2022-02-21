/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:50:15 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/24 17:36:16 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

# define MALLOC_ERROR "Malloc error."
# define CLEANING_ERROR "An error occured during cleaning process."
# define INVALID_NBR "Invalid number detected."
# define MULTIPLE_NBR "A number has been entered two times or more."
# define MISSING_ARGS "Missing arguments."

typedef struct s_nb
{
	int	pos;
	int	value;
	int	moves;
}	t_nb;

typedef struct s_stack
{
	int	*nbr;
	int	size;
}	t_stack;

typedef struct s_chunk
{
	int	i;
	int	min;
	int	max;
	int	size;
}	t_chunk;

typedef struct s_ps
{
	int			nbrs;
	int			*temp_a;
	int			*temp_b;
	t_stack		a;
	t_stack		b;
	int			*sort;
	t_chunk		chunk;
	t_nb		top;
	t_nb		bottom;
	int			chunk_count;
	int			pos_max;
}	t_ps;

int			main(int argc, char **argv);
void		ft_push_swap(t_ps *conf);
void		ft_error(int clean, char *msg);
void		ft_success(int clean, char *msg);
int			ft_free(t_ps *conf);
int			ft_is_sort(int *tab, int n);
void		ft_init_var(t_ps *conf);
void		ft_malloc_stack_a(t_ps *conf);
void		ft_temp_malloc_stack_a(t_ps *conf, int size);
void		ft_temp_malloc_stack_b(t_ps *conf, int size);
int			ft_find_smallest(int *tab, int n);
void		ft_smallest_nbr(t_ps *conf);
void		ft_sort_list(t_ps *conf);
void		ft_list_dup(int *src, int *dst, int n);
void		ft_find_from_top(t_ps *conf);
void		ft_init_chunk(t_ps *conf, int chunks);
int			ft_find_sort_pos(t_ps *conf, int valueue);
void		ft_pre_stack_b(t_ps *conf);
void		ft_putnbr_top(t_ps *conf);
int			ft_pos_b(t_ps *conf, int valueue);
void		ft_find_from_bottom(t_ps *conf);
void		ft_find_from_top(t_ps *conf);
void		ft_putnbr_top(t_ps *conf);
void		ft_stack_b(t_ps *conf);
void		ft_put_a(t_ps *conf);
long long	ft_atoi(const char *str);
int			ft_check_arg(char *arg);
int			ft_check_int(long long nb);
int			ft_check_multiple(int *stack, int n, int nb);
void		ft_sa(t_ps *conf);
void		ft_ra(t_ps *conf);
void		ft_ra_times(t_ps *conf, int times);
void		ft_rra(t_ps *conf);
void		ft_rra_times(t_ps *conf, int times);
void		ft_pb(t_ps *conf);
void		ft_sb(t_ps *conf);
void		ft_rb(t_ps *conf);
void		ft_rb_times(t_ps *conf, int times);
void		ft_rrb(t_ps *conf);
void		ft_rrb_times(t_ps *conf, int times);
void		ft_pa(t_ps *conf);
void		ft_sort(t_ps *conf);
void		ft_three_nbr(t_ps *conf);
void		ft_five_nbr(t_ps *conf);
void		ft_hundred_nbr(t_ps *conf, int chunks);
void		ft_putendl_fd(char *s, int fd);
void		ft_putstr(char *str);

#endif