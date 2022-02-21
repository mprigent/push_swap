/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:12:13 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/23 17:31:05 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_three_nbr(t_ps *conf)
{
	int	biggest;
	int	middle;
	int	smallest;

	biggest = conf->a.nbr[0];
	middle = conf->a.nbr[1];
	smallest = conf->a.nbr[2];
	if (biggest > middle && middle < smallest && smallest > biggest)
		ft_sa(conf);
	if (biggest > middle && middle < smallest && smallest < biggest)
		ft_ra(conf);
	if (biggest < middle && middle > smallest && smallest < biggest)
		ft_rra(conf);
	if (biggest < middle && middle > smallest && smallest > biggest)
	{
		ft_sa(conf);
		ft_ra(conf);
	}
	if (biggest > middle && middle > smallest && smallest < biggest)
	{
		ft_sa(conf);
		ft_rra(conf);
	}
}
