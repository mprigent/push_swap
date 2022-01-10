/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:50:15 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/10 20:01:12 by mprigent         ###   ########.fr       */
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

typedef struct s_ps
{
	int *temp_a;
	int *temp_b;
	int a_size;
	int *a_nbr;
	int b_size;
	int *b_nbr;
	int nbrs;
}	t_ps;

int		main(int argc, char **argv);
int		ft_atoi(const char *str);
int		ft_check_arg(char *arg);
int		ft_check_int(long long nbr);
int		ft_check_multiple(int *stack, int nbr, int n);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr(char *str);
void	ft_init_var(t_ps *conf);
int		ft_print_err(char *msg);
int		ft_error(int clean, char *msg);
int		ft_success(int clean, char *msg);
int		ft_free(t_ps *conf);
int		ft_malloc_stack_a(t_ps *conf);
int		ft_temp_malloc_stack_a(t_ps *conf, int resize);
int		ft_temp_malloc_stack_b(t_ps *conf, int resize);
int		ft_pa(t_ps *conf);
int		ft_pb(t_ps *conf);
int		ft_sa(t_ps *conf);
int		ft_sb(t_ps *conf);
int		ft_ra(t_ps *conf);
int		ft_rb(t_ps *conf);
int		ft_rra(t_ps *conf);
int		ft_rrb(t_ps	*conf);
int		ft_three_nbr(t_ps *conf);

#endif