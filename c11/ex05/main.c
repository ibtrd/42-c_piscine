/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:06:04 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/12 17:05:29 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int	main(int argc, char **argv)
{
	int	i;
	int	(*f[5])(int, int);

	if (argc != 4)
		return (1);
	i = operator_index(argv[2]);
	if (i < 0)
		return (1);
	if (forbidden_op(argv))
		return (1);
	f[0] = add;
	f[1] = sub;
	f[2] = div;
	f[3] = mul;
	f[4] = mod;
	ft_putnbr(result(ft_atoi(argv[1]), ft_atoi(argv[3]), f[i]));
	ft_putchar(10);
}

int	operator_index(char *str)
{
	if (str[0] == '+' && !str[1])
		return (0);
	if (str[0] == '-' && !str[1])
		return (1);
	if (str[0] == '/' && !str[1])
		return (2);
	if (str[0] == '*' && !str[1])
		return (3);
	if (str[0] == '%' && !str[1])
		return (4);
	ft_putstr("0\n");
	return (-1);
}

int	result(int a, int b, int (*f)(int, int))
{
	return ((*f)(a, b));
}
