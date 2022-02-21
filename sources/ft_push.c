/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 22:39:31 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/23 18:30:35 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_temp_malloc_stack_a(t_ps *conf, int size)
{
	conf->temp_a = (int *)malloc((conf->a.size + size) * sizeof(int));
	if (!conf->temp_a)
		ft_error(ft_free(conf), MALLOC_ERROR);
}

void	ft_temp_malloc_stack_b(t_ps *conf, int size)
{
	conf->temp_b = (int *)malloc((conf->b.size + size) * sizeof(int));
	if (!conf->temp_b)
		ft_error(ft_free(conf), MALLOC_ERROR);
}

void	ft_pa(t_ps *conf)
{
	int	i;

	i = 0;
	ft_temp_malloc_stack_b(conf, -1);
	ft_temp_malloc_stack_a(conf, 1);
	conf->temp_a[0] = conf->b.nbr[0];
	while (i < conf->a.size)
	{
		conf->temp_a[i + 1] = conf->a.nbr[i];
		i++;
	}
	free(conf->a.nbr);
	conf->a.nbr = conf->temp_a;
	conf->a.size++;
	i = 0;
	while (i < conf->b.size - 1)
	{
		conf->temp_b[i] = conf->b.nbr[i + 1];
		i++;
	}
	free(conf->b.nbr);
	conf->b.nbr = conf->temp_b;
	conf->b.size--;
	ft_putstr("pa\n");
}

void	ft_pb(t_ps *conf)
{
	int	i;

	if (conf->a.size <= 0)
		return ;
	i = -1;
	ft_temp_malloc_stack_b(conf, 1);
	ft_temp_malloc_stack_a(conf, -1);
	conf->temp_b[0] = conf->a.nbr[0];
	while (++i < conf->b.size)
		conf->temp_b[i + 1] = conf->b.nbr[i];
	free(conf->b.nbr);
	conf->b.nbr = conf->temp_b;
	conf->b.size++;
	i = -1;
	while (++i < conf->a.size - 1)
		conf->temp_a[i] = conf->a.nbr[i + 1];
	free(conf->a.nbr);
	conf->a.nbr = conf->temp_a;
	conf->a.size--;
	ft_putstr("pb\n");
}
