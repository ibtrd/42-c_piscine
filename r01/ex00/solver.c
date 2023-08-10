/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:22:53 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/16 22:33:55 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		init_line(char *line);
int		next_line(char *line);
int		input_check(char grid[4][4], char input[4][4]);
void	display(char solution[4][4]);
void	ft_putstr(char *str);

int	columns_are_valid(char grid[4][4])
{
	int	a;
	int	b;
	int	c;

	c = 0;
	while (c < 4)
	{
		a = 0;
		while (a < 4)
		{
			b = 0;
			while (b < 4)
			{
				if (grid[b][c] == '0')
					return (0);
				if (grid[b][c] == grid[a][c] && a != b)
					return (0);
				b++;
			}
			a++;
		}
		c++;
	}
	return (1);
}

int	solver(char grid[4][4], char input[4][4])
{
	while (grid[3][3] <= '4')
	{	
		next_line(grid[0]);
		if (grid[0][3] > '4')
		{
			init_line(grid[0]);
			next_line(grid[1]);
		}
		if (grid[1][3] > '4')
		{
			init_line(grid[1]);
			next_line(grid[2]);
		}
		if (grid[2][3] > '4')
		{
			init_line(grid[2]);
			next_line(grid[3]);
		}
		if (columns_are_valid(grid) && input_check(grid, input))
			return (1);
	}
	return (0);
}
