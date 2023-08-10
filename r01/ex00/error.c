/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrognon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:55:49 by mtrognon          #+#    #+#             */
/*   Updated: 2023/07/16 20:20:33 by mtrognon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_error(void)
{
	write(2, "Error\n", 6);
}

int	ft_toolong(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == 0)
	{
		ft_print_error();
		return (0);
	}
	while (argv[i] && i <= 31)
	{
		i++;
	}
	if (i != 31)
	{
		ft_print_error();
		return (0);
	}
	return (1);
}

int	ft_nb_correct(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if ((argv[i] < '1' || argv[i] > '4') && argv[i] != 32)
		{
			ft_print_error();
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_espace_correct(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if ((i % 2) == 1)
		{
			if (argv[i] != 32)
			{
				ft_print_error();
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int	ft_error(int argc, char *argv[])
{
	if (argc != 2)
	{
		ft_print_error();
		return (0);
	}
	if (0 == ft_toolong(argv[1]))
		return (0);
	if (0 == ft_nb_correct(argv[1]))
		return (0);
	if (0 == ft_espace_correct(argv[1]))
		return (0);
	return (1);
}
