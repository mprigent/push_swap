/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:39:02 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/23 18:32:44 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	conf;
	int		i;

	i = 1;
	ft_init_var(&conf);
	if (argc < 2)
		ft_success(ft_free(&conf), MISSING_ARGS);
	conf.nbrs = argc - 1;
	conf.a.size = conf.nbrs;
	ft_malloc_stack_a(&conf);
	while (i < argc)
	{
		if (!ft_check_arg(argv[i]))
			ft_error(ft_free(&conf), INVALID_NBR);
		if (!ft_check_multiple(conf.a.nbr, i - 1, ft_atoi(argv[i])))
			ft_error(ft_free(&conf), MULTIPLE_NBR);
		conf.a.nbr[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	ft_push_swap(&conf);
}

void	ft_push_swap(t_ps *conf)
{
	if (!ft_is_sort(conf->a.nbr, conf->a.size))
		ft_sort(conf);
	else
		ft_success(ft_free(conf), INVALID_NBR);
}
