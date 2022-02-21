/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hundred_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:41:27 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/23 17:02:11 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_list_dup(int *src, int *dst, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
}

void	ft_init_chunk(t_ps *conf, int chunks)
{
	conf->chunk.size = conf->nbrs / chunks;
	if (conf->chunk.i == chunks - 1)
	{
		conf->chunk.size = conf->nbrs - ((chunks - 1) * conf->chunk.size);
		conf->chunk.min = conf->sort[conf->nbrs - conf->chunk.size];
		conf->chunk.max = conf->sort[conf->nbrs - 1];
	}
	else
	{	
		conf->chunk.min = conf->sort[conf->chunk.size * conf->chunk.i];
		conf->chunk.max = conf->sort[(conf->chunk.size * conf->chunk.i)
			+ conf->chunk.size - 1];
	}
}

void	ft_hundred_nbr(t_ps *conf, int chunks)
{
	int	i;

	ft_sort_list(conf);
	i = 0;
	conf->chunk_count = 0;
	conf->chunk.size = conf->nbrs / chunks;
	conf->chunk.i = 0;
	while (i < conf->nbrs)
	{
		if (conf->chunk_count == conf->chunk.size && conf->chunk.i < chunks)
		{
			conf->chunk_count = 0;
			conf->chunk.i++;
		}
		ft_init_chunk(conf, chunks);
		ft_find_from_top(conf);
		ft_find_from_bottom(conf);
		ft_putnbr_top(conf);
		ft_pre_stack_b(conf);
		ft_pb(conf);
		i++;
		conf->chunk_count++;
	}
	ft_stack_b(conf);
	ft_put_a(conf);
}
