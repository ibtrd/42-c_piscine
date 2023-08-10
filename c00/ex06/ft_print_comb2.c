/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:10:43 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/22 09:47:47 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_result(int a, int b)
{
	ft_putchar(a / 10 + 48);
	ft_putchar(a % 10 + 48);
	ft_putchar(32);
	ft_putchar(b / 10 + 48);
	ft_putchar(b % 10 + 48);
	if (!(a == 98 && b == 99))
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		while (b < 100)
		{
			if (b > a)
				print_result(a, b);
			b++;
		}
		b = 0;
		a++;
	}
}
