/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:47:50 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/10 19:27:14 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sa(t_ps *conf)
{
	int temp;

	temp = conf->a_nbr[1];
	conf->a_nbr[1] = conf->a_nbr[0];
	conf->a_nbr[0] = temp;
	ft_putstr("sa\n");
	return (0);
}

int	ft_sb(t_ps *conf)
{
	int temp;

	temp = conf->b_nbr[1];
	conf->b_nbr[1] = conf->b_nbr[0];
	conf->b_nbr[0] = temp;
	ft_putstr("sb\n");
	return (0);
}