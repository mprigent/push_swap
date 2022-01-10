/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:06:56 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/10 19:27:14 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_rra(t_ps *conf)
{
	int temp;
	int i;
	
	if (conf->a_size >= 2)
	{
		i = conf->a_size - 1;
		temp = conf->a_nbr[conf->a_size - 1];
		while (i > 0)
		{
			conf->a_nbr[i] = conf->a_nbr[i -1];
			i--;
		}
		conf->a_nbr[i] = temp;
	}
	ft_putstr("rra\n");
	return (0);
}

int ft_rrb(t_ps	*conf)
{
	int temp;
	int i;
	
	if (conf->b_size >= 2)
	{
		i = conf->b_size - 1;
		temp = conf->b_nbr[conf->b_size - 1];
		while (i > 0)
		{
			conf->b_nbr[i] = conf->b_nbr[i -1];
			i--;
		}
		conf->b_nbr[i] = temp;
	}
	ft_putstr("rrb\n");
	return (0);	
}