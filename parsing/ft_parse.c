/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:33:43 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/23 16:34:29 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_int(long long nb)
{
	if (nb < INT_MIN)
		return (0);
	if (nb > INT_MAX)
		return (0);
	return (1);
}

int	ft_check_arg(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		if ((arg[i] < '0' || arg[i] > '9') && arg[i] != '-')
			return (0);
		if (arg[i] == '-' && i > 0)
			return (0);
		i++;
	}
	if (i == 0)
		return (0);
	if (!ft_check_int(ft_atoi(arg)))
		return (0);
	return (1);
}

int	ft_check_multiple(int *stack, int n, int nb)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (stack[i] == nb)
			return (0);
		i++;
	}
	return (1);
}
