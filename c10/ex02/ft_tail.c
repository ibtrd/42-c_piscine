/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 03:55:20 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/19 04:10:19 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ex02.h"

int	main(int argc, char **argv)
{
	int	c;

	if (argc < 3)
		return (1);
	c = number_of_bytes(argc, argv);
	if (c == -1)
		return (1);
	if (argc == 4)
		display_one(argv, c);
	else
		display_all(argc, argv, c);
	return (0);
}

int	number_of_bytes(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!strcmp(argv[i], "-c"))
		{
			if (i + 1 >= argc)
			{
				put_no_arg_error(argv[0], argv[i]);
			}
			else if (!is_str_num(argv[i + 1]))
			{
				put_byte_error(argv[0], argv[i + 1]);
				return (-1);
			}
			else
				return (ft_atoi(argv[i + 1]));
		}
		i++;
	}
	return (-1);
}

int	is_str_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
