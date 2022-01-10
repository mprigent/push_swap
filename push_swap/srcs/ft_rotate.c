/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:59:23 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/10 19:27:14 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_ra(t_ps *conf)
{
	int temp;
	int i;

	if (conf->a_size >= 2)
	{
		i = 0;
		temp = conf->a_nbr[0];
		while (i < conf->a_size - 1)
		{
			conf->a_nbr[i] = conf->a_nbr[i + 1];
			i++;
		}
		conf->a_nbr[i] = temp;
	}
	ft_putstr("ra\n");
	return (0);
}

int	ft_rb(t_ps *conf)
{
	int temp;
	int i;

	if (conf->b_size >=2)
	{
		i = 0;
		temp = conf->b_nbr[0];
		while (i < conf->b_size - 1)
		{
			conf->b_nbr[i] = conf->b_nbr[i + 1];
			i++;
		}
		conf->b_nbr[i] = temp;
	}
	ft_putstr("rb\n");
	return (0);
}