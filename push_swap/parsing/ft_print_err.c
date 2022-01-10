/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:22:47 by mprigent          #+#    #+#             */
/*   Updated: 2022/01/10 17:26:01 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_print_err(char *msg)
{
	ft_putendl_fd("\033[31mError.\033[0;37m", STDOUT_FILENO);
	ft_putendl_fd(msg, STDOUT_FILENO);
	return (1);
}

int	ft_success(int clean, char *msg)
{
	ft_putendl_fd("\033[31mError.\033[0;37m", STDOUT_FILENO);
	ft_putendl_fd(msg, STDOUT_FILENO);
	if (!clean)
		ft_print_err(CLEANING_ERROR);
	exit(EXIT_SUCCESS);
	return (1);
}

int ft_error(int clean, char *msg)
{
	ft_putendl_fd("\033[31mError.\033[0;37m", STDOUT_FILENO);
	ft_putendl_fd(msg, STDOUT_FILENO);
	if(!clean)
		ft_print_err(CLEANING_ERROR);
	exit(EXIT_SUCCESS);
	return (1);
}
