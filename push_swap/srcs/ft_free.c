/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:41:25 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/10 19:27:14 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_malloc_stack_a(t_ps *conf)
{
	conf->a_nbr = (int *)malloc(conf->a_size * sizeof(int));
	if (!conf->a_nbr)
		ft_error(ft_free(conf), MALLOC_ERROR);
	return (0);
}

int	ft_free(t_ps *conf)
{
	if (conf->a_nbr)
		free(conf->a_nbr);
	if (conf->b_nbr)
		free(conf->b_nbr);
	return (1);
}