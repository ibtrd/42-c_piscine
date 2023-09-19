/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:28:58 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/19 03:55:06 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex02.h"

void	put_singlefile_error(char *exe, char *filepath)
{
	ft_putstr_fd(basename(exe), 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd(filepath, 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd(strerror(errno), 2);
	ft_putchar_fd('\n', 2);
}

void	put_multiplefile_error(char *exe, char *filepath)
{
	ft_putstr_fd(basename(exe), 2);
	ft_putstr_fd(": cannot open '", 2);
	ft_putstr_fd(filepath, 2);
	ft_putstr_fd("' for reading: ", 2);
	ft_putstr_fd(strerror(errno), 2);
	ft_putchar_fd('\n', 2);
}

void	put_byte_error(char *exe, char *arg)
{
	ft_putstr_fd(basename(exe), 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd("invalid number of bytes: '", 2);
	ft_putstr_fd(arg, 2);
	ft_putstr_fd("'\n", 2);
}

void	put_no_arg_error(char *exe, char *option)
{
	ft_putstr_fd(basename(exe), 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd("option requires an argument -- '", 2);
	ft_putstr_fd(option, 2);
	ft_putstr_fd("'\n", 2);
}
