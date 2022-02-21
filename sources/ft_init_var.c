/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_var.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:19:02 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/23 17:01:00 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_init_var(t_ps *conf)
{
	conf->nbrs = 0;
	conf->temp_a = NULL;
	conf->temp_b = NULL;
	conf->a.nbr = NULL;
	conf->b.nbr = NULL;
	conf->a.size = 0;
	conf->b.size = 0;
}
