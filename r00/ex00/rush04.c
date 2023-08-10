/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:15:18 by machrist          #+#    #+#             */
/*   Updated: 2023/07/08 20:15:15 by machrist         ###   ########.fr       */
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
			if ((l == 1 && c == 1) || (l == y && c == x && x != 1 && l != 1))
				ft_putchar('A');
			else if (l > 1 && l < y && c > 1 && c < x)
				ft_putchar(' ');
			else if ((l == 1 && c == x) || (l == y && c == 1))
				ft_putchar('C');
			else
				ft_putchar('B');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
