/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:39:02 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/10 19:50:17 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_ps	conf;
	int		i;

	i = 1;
	ft_init_var(&conf);
	if (argc < 2)
		ft_success(ft_free(&conf), MISSING_ARGS);
	ft_malloc_stack_a(&conf);
	while (i < argc)
	{
		if (!ft_check_arg(argv[i]))
			ft_error(ft_free(&conf), INVALID_NBR);
		if (!ft_check_multiple(conf.a_nbr, i - 1, ft_atoi(argv[i])))
			ft_error(ft_free(&conf), MULTIPLE_NBR);
		conf.a_nbr[i - 1] = ft_atoi(argv[i]);
		i++;
	}
}
