/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 22:39:31 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/10 19:27:14 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_temp_malloc_stack_a(t_ps *conf, int resize)
{
	conf->temp_a = (int *)malloc((conf->a_size + resize) * sizeof(int));
	if (!conf->temp_a)
		ft_error(ft_free(conf), MALLOC_ERROR);
	return (0);
}

int	ft_temp_malloc_stack_b(t_ps *conf, int resize)
{
	conf->temp_b = (int *)malloc((conf->b_size + resize) * sizeof(int));
	if (!conf->temp_b)
		ft_error(ft_free(conf), MALLOC_ERROR);
	return (0);
}

int ft_pa(t_ps *conf)
{
	int i;

	i = 0;
	ft_temp_malloc_stack_a(conf, 1);
	ft_temp_malloc_stack_b(conf, -1);
	conf->temp_a[0] = conf->b_nbr[0];
	while (i < conf->a_size)
	{
		conf->temp_a[i + 1] = conf->a_nbr[i];
		i++;
	}
	free(conf->a_nbr);
	conf->b_nbr = conf->temp_a;
	conf->a_size++;
	i = 0;
	while (i < conf->b_size - 1)
	{
		conf->temp_b[i] =conf->b_nbr[i + 1];
		i++;
	}
	free(conf->b_nbr);
	conf->b_nbr = conf->temp_b;
	conf->b_size--;
	ft_putstr("pa\n");
	return (0);
}

int	ft_pb(t_ps *conf)
{
	int i;

	if (conf->a_size <= 0)
		return (1);
	i = 0;
	ft_temp_malloc_stack_b(conf, 1);
	ft_temp_malloc_stack_a(conf, -1);
	conf->temp_b[0] = conf->a_nbr[0];
	while (i < conf->b_size)
	{
		conf->temp_b[i + 1] = conf->b_nbr[i];
		i++;
	}
	free(conf->b_nbr);
	conf->b_nbr = conf->temp_b;
	conf->b_size++;
	i = 0;
	while (i < conf->a_size - 1)
	{
		conf->temp_a[i] = conf->a_nbr[i + 1];
		i++;
	}
	free(conf->a_nbr);
	conf->a_nbr = conf->temp_a;
	conf->a_size--;
	ft_putstr("pb\n");
	return(0);
}
