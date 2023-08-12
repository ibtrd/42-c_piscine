/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 02:35:02 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/12 05:07:00 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483647)
	{
		write(1, "-2147483647", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb <= 9)
		ft_putchar(nb + 48);
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

int	main(void)
{
	int	tab[5];
	int	i;

	i = 0;
	while (i < 5)
	{
		tab[i] = i + 1;
		i++;
	}
	ft_foreach(tab, 5, &ft_putnbr);
	ft_putchar(10);
	return (0);
}
