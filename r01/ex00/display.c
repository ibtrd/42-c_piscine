/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:56:22 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/16 21:03:06 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display(char grid[4][4])
{	
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_putchar(grid[y][x]);
			if (x < 3)
				ft_putchar(32);
			x++;
		}
		if (y < 3)
			ft_putchar(10);
		y++;
	}
	ft_putchar(10);
}
