/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:06:56 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/23 16:58:21 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra_times(t_ps *conf, int times)
{
	int	i;

	i = 0;
	while (i < times)
	{
		ft_rra(conf);
		i++;
	}
}

void	ft_rra(t_ps *conf)
{
	int	temp;
	int	i;

	if (conf->a.size >= 2)
	{
		i = conf->a.size - 1;
		temp = conf->a.nbr[conf->a.size - 1];
		while (i > 0)
		{
			conf->a.nbr[i] = conf->a.nbr[i - 1];
			i--;
		}
		conf->a.nbr[i] = temp;
	}
	ft_putstr("rra\n");
}

void	ft_rrb_times(t_ps *conf, int times)
{
	int	i;

	i = 0;
	while (i < times)
	{
		ft_rrb(conf);
		i++;
	}
}

void	ft_rrb(t_ps *conf)
{
	int	temp;
	int	i;

	if (conf->b.size >= 2)
	{
		i = conf->b.size - 1;
		temp = conf->b.nbr[conf->b.size - 1];
		while (i > 0)
		{
			conf->b.nbr[i] = conf->b.nbr[i - 1];
			i--;
		}
		conf->b.nbr[0] = temp;
	}
	ft_putstr("rrb\n");
}
