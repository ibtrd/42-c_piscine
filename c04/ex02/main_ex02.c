/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:16:40 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/13 17:52:53 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int	baby_atoi(char *str)
{
	int	i;
	int	res;
	int	neg;

	i = 0;
	res = 0;
	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	while (str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (neg == 1)
		res *= -1;
	return (res);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_putnbr(baby_atoi(argv[1]));
	}
}
