/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:52:12 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/08 15:55:25 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i == 1 && j == 1) || (i == x && j == 1))
				ft_putchar('o');
			else if ((i == 1 && j == y) || (i == x && j == y))
				ft_putchar('o');
			else if ((j == 1 || j == y) && (i > 1 && i < x))
				ft_putchar('-');
			else if (i > 1 && i < x && j > 1 && j < y)
				ft_putchar(' ');
			else
				ft_putchar('|');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
