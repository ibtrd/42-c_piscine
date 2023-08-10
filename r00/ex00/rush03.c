/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndroinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:49:03 by ndroinea          #+#    #+#             */
/*   Updated: 2023/07/08 17:23:23 by ndroinea         ###   ########.fr       */
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
			if ((c == 1 && l == 1) || (c == 1 && l == y))
				ft_putchar('A');
			else if (l > 1 && l < y && c > 1 && c < x)
				ft_putchar(' ');
			else if ((l == 1 && c == x) || (l == y && c == x))
				ft_putchar('C');
			else
				ft_putchar('B');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
