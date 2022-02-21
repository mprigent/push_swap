/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_nbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:14:06 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/23 17:02:11 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_find_smallest(int *stack, int n)
{
	int	i;
	int	min;
	int	pos;

	i = 0;
	pos = 0;
	min = INT_MAX;
	while (i < n)
	{
		if (stack[i] < min)
		{
			min = stack[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

void	ft_putnbr_top(t_ps *conf)
{
	if (conf->top.moves <= conf->bottom.moves)
		ft_ra_times(conf, conf->top.moves);
	else
		ft_rra_times(conf, conf->bottom.moves - 1);
}

void	ft_find_from_bottom(t_ps *conf)
{
	int	i;

	i = conf->a.size - 1;
	while (conf->a.nbr[i] < conf->chunk.min
		|| conf->a.nbr[i] > conf->chunk.max)
		i--;
	conf->bottom.pos = i;
	conf->bottom.value = conf->a.nbr[i];
	conf->bottom.moves = (conf->a.size - i) + 1;
}

void	ft_find_from_top(t_ps *conf)
{
	int	i;

	i = 0;
	while (conf->a.nbr[i] < conf->chunk.min
		|| conf->a.nbr[i] > conf->chunk.max)
		i++;
	conf->top.pos = i;
	conf->top.value = conf->a.nbr[i];
	conf->top.moves = i;
}

int	ft_find_sort_pos(t_ps *conf, int value)
{
	int	i;

	i = 0;
	while (i < conf->nbrs)
	{
		if (conf->sort[i] == value)
			return (i);
		i++;
	}
	return (i);
}
