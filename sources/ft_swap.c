/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:47:50 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/23 16:58:03 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_ps *conf)
{
	int	temp;

	temp = conf->a.nbr[1];
	conf->a.nbr[1] = conf->a.nbr[0];
	conf->a.nbr[0] = temp;
	ft_putstr("sa\n");
}

void	ft_sb(t_ps *conf)
{
	int	temp;

	temp = conf->b.nbr[1];
	conf->b.nbr[1] = conf->b.nbr[0];
	conf->b.nbr[0] = temp;
	ft_putstr("sb\n");
}
