/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:39:27 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/23 17:02:11 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort(t_ps *conf)
{
	if (conf->nbrs == 2)
		ft_sa(conf);
	else if (conf->nbrs == 3)
		ft_three_nbr(conf);
	else if (conf->nbrs <= 5)
		ft_five_nbr(conf);
	else if (conf->nbrs <= 100)
	{
		ft_hundred_nbr(conf, 5);
		free(conf->sort);
	}
	else
	{
		ft_hundred_nbr(conf, 11);
		free(conf->sort);
	}
	ft_free(conf);
}

void	ft_sort_list(t_ps *conf)
{
	int	size;
	int	min;
	int	i;
	int	temp;

	size = 0;
	min = INT_MIN;
	conf->sort = (int *)malloc(conf->a.size * sizeof(int));
	if (!conf->sort)
		ft_error(ft_free(conf), MALLOC_ERROR);
	ft_list_dup(conf->a.nbr, conf->sort, conf->a.size);
	while (!ft_is_sort(conf->sort, conf->a.size))
	{
		i = 0;
		while (i < conf->a.size - 1)
		{
			if (conf->sort[i] > conf->sort[i + 1])
			{
				temp = conf->sort[i + 1];
				conf->sort[i + 1] = conf->sort[i];
				conf->sort[i] = temp;
			}
			i++;
		}
	}
}

int	ft_is_sort(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n - 1)
	{
		if (tab[i] >= tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}
