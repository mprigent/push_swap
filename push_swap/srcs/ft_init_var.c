/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_var.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:19:02 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/10 19:27:14 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_init_var(t_ps *conf)
{
	conf->temp_a = NULL;
	conf->temp_b = NULL;
	conf->a_size = 0;
	conf->a_nbr = NULL;
	conf->b_size = 0;
	conf->b_nbr = NULL;
}