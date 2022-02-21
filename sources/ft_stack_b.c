/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:53:03 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/23 17:02:11 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stack_b(t_ps *conf)
{
	conf->pos_max = ft_pos_b(conf, conf->sort[conf->nbrs - 1]);
	if (conf->pos_max <= (conf->b.size / 2))
		ft_rb_times(conf, conf->pos_max);
	else
		ft_rrb_times(conf, (conf->b.size - conf->pos_max));
}

void	ft_put_a(t_ps *conf)
{
	int	i;

	i = 0;
	while (i < conf->nbrs)
	{
		ft_pa(conf);
		i++;
	}
}

int	ft_pos_b(t_ps *conf, int value)
{
	int	i;

	i = 0;
	while (i < conf->b.size)
	{
		if (conf->b.nbr[i] == value)
			return (i);
		i++;
	}
	return (i);
}

void	ft_pre_stack_b(t_ps *conf)
{
	int	i;
	int	min;

	i = 0;
	min = -1;
	if (conf->b.size == 0)
		return ;
	while (i < conf->b.size)
	{
		if (conf->b.nbr[i] < conf->a.nbr[0])
		{
			if (min == -1)
				min = i;
			if (conf->a.nbr[0] - conf->b.nbr[i]
				< conf->a.nbr[0] - conf->b.nbr[min])
				min = i;
		}
		i++;
	}
	if (min == -1)
		min = ft_find_smallest(conf->b.nbr, conf->b.size) + 1;
	if (min <= (conf->b.size / 2))
		ft_rb_times(conf, min);
	else
		ft_rrb_times(conf, (conf->b.size - min));
}
