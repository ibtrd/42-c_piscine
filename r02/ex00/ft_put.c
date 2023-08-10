/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:40:49 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/23 22:34:11 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putstr_s(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar(32);
}

void	ft_putchar_error(char c)
{
	write(2, &c, 1);
}

void	ft_putstr_error(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		ft_putchar_error(str[i]);
		i++;
	}
}
