/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:41:25 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/23 18:29:46 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_malloc_stack_a(t_ps *conf)
{
	conf->a.nbr = (int *)malloc(conf->a.size * sizeof(int));
	if (!conf->a.nbr)
		ft_error(ft_free(conf), MALLOC_ERROR);
}

int	ft_free(t_ps *conf)
{
	if (conf->a.nbr)
		free(conf->a.nbr);
	if (conf->b.nbr)
		free(conf->b.nbr);
	return (1);
}
