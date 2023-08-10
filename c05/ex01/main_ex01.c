/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 13:31:15 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/17 15:45:38 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int);

int	ft_baby_atoi(char *str)
{
	int	nb;
	int	i;
	int	is_neg;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	is_neg = 0;
	while (str[i] == '+'|| str[i] == '-')
	{
		if (str[i] == '-')
			is_neg++;
		i++;
	}
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	if (is_neg % 2 != 0)
		nb = -nb;
	return (nb);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_recursive_factorial(ft_baby_atoi(argv[1])));
	return (0);
}
