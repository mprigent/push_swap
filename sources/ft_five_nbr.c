/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five_nbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:04:15 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/23 16:52:39 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_smallest_nbr(t_ps *conf)
{
	int	min_pos;

	min_pos = ft_find_smallest(conf->a.nbr, conf->a.size);
	while (min_pos != 0)
	{
		if (min_pos < 2)
			ft_ra(conf);
		else
			ft_rra(conf);
		min_pos = ft_find_smallest(conf->a.nbr, conf->a.size);
	}
	ft_pb(conf);
}

void	ft_five_nbr(t_ps *conf)
{
	int	n;

	n = conf->a.size;
	while (n > 3)
	{
		ft_smallest_nbr(conf);
		n--;
	}
	ft_three_nbr(conf);
	n = conf->b.size;
	while (n > 0)
	{
		ft_pa(conf);
		n--;
	}
}
