/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndroinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:36:24 by ndroinea          #+#    #+#             */
/*   Updated: 2023/07/08 20:05:45 by ndroinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	while (l <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((x == 1 && l == y) || (y == 1 && c == x))
				ft_putchar('\\');
			else if ((c == 1 && l == 1) || (c == x && l == y))
				ft_putchar('/');
			else if ((l == 1 && c == x) || (l == y && c == 1))
				ft_putchar('\\');
			else if (l > 1 && l < y && c > 1 && c < x)
				ft_putchar(' ');
			else
				ft_putchar('*');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
