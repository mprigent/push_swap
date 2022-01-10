/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:12:13 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/10 19:27:00 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_three_nbr(t_ps *conf)
{
	int smallest;
	int middle;
	int biggest;
	
	smallest = conf->a_nbr[2];
	middle = conf->a_nbr[1];
	biggest = conf->a_nbr[0];
	if (biggest > middle && middle < smallest && smallest > biggest)
		ft_sa(conf);
	if (biggest > middle && middle < smallest && smallest < biggest)
		ft_ra(conf);
	if (biggest > middle && middle > smallest && smallest < biggest)
	{
		ft_sa(conf);
		ft_rra(conf);
	}
	if (biggest < middle && middle > smallest && smallest > biggest)
	{
		ft_sa(conf);
		ft_ra(conf);
	}
	if (biggest < middle && middle > smallest && smallest < biggest)
		ft_rra(conf);
	return (0);
}