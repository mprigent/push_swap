/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:22:47 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/23 17:54:28 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_print_err(char *msg)
{
	(void)msg;
	ft_putendl_fd("\033[31mError.\033[0;37m", STDOUT_FILENO);
	return (1);
}

void	ft_success(int clean, char *msg)
{
	(void)msg;
	if (!clean)
		ft_print_err(CLEANING_ERROR);
	exit(EXIT_SUCCESS);
}

void	ft_error(int clean, char *msg)
{
	(void)msg;
	ft_putendl_fd("\033[31mError.\033[0;37m", STDOUT_FILENO);
	if (!clean)
		ft_print_err(CLEANING_ERROR);
	exit(EXIT_SUCCESS);
}
