/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:59:23 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/23 16:58:21 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra_times(t_ps *conf, int times)
{
	int	i;

	i = 0;
	while (i < times)
	{
		ft_ra(conf);
		i++;
	}
}

void	ft_ra(t_ps *conf)
{
	int	temp;
	int	i;

	if (conf->a.size >= 2)
	{
		i = 0;
		temp = conf->a.nbr[0];
		while (i < conf->a.size - 1)
		{
			conf->a.nbr[i] = conf->a.nbr[i + 1];
			i++;
		}
		conf->a.nbr[i] = temp;
	}
	ft_putstr("ra\n");
}

void	ft_rb_times(t_ps *conf, int times)
{
	int	i;

	i = 0;
	while (i < times)
	{
		ft_rb(conf);
		i++;
	}
}

void	ft_rb(t_ps *conf)
{
	int	temp;
	int	i;

	if (conf->b.size >= 2)
	{
		i = 0;
		temp = conf->b.nbr[0];
		while (i < conf->b.size - 1)
		{
			conf->b.nbr[i] = conf->b.nbr[i + 1];
			i++;
		}
		conf->b.nbr[i] = temp;
	}
	ft_putstr("rb\n");
}
