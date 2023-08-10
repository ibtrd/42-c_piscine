/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 03:02:13 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/16 21:49:05 by aleonce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_up_check(char grid[4][4], char input[4][4], int col)
{
	char	res;
	int		a;
	int		b;

	a = 0;
	b = 1;
	res = '1';
	while (b < 4)
	{
		if (grid[a][col] < grid[b][col] && a != b)
		{
			res++;
			a = b;
		}
		b++;
	}
	if (res - input[0][col])
		return (0);
	else
		return (1);
}

int	col_down_check(char grid[4][4], char input[4][4], int col)
{
	char	res;
	int		a;
	int		b;

	a = 3;
	b = 2;
	res = '1';
	while (b > -1)
	{
		if (grid[a][col] < grid[b][col] && a != b)
		{
			res++;
			a = b;
		}
		b--;
	}
	if (res - input[1][col])
		return (0);
	else
		return (1);
}

int	row_left_check(char grid[4][4], char input[4][4], int row)
{
	char	res;
	int		a;
	int		b;

	a = 0;
	b = 1;
	res = '1';
	while (b < 4)
	{
		if (grid[row][a] < grid[row][b] && a != b)
		{
			res++;
			a = b;
		}
		b++;
	}
	if (res - input[2][row])
		return (0);
	else
		return (1);
}

int	row_right_check(char grid[4][4], char input[4][4], int row)
{
	char	res;
	int		a;
	int		b;

	a = 3;
	b = 2;
	res = '1';
	while (b > -1)
	{
		if (grid[row][a] < grid[row][b] && a != b)
		{
			res++;
			a = b;
		}
		b--;
	}
	if (res - input[3][row])
		return (0);
	else
		return (1);
}

int	input_check(char grid[4][4], char input[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!col_up_check(grid, input, i))
			return (0);
		if (!col_down_check(grid, input, i))
			return (0);
		if (!row_left_check(grid, input, i))
			return (0);
		if (!row_right_check(grid, input, i))
			return (0);
		i++;
	}
	return (1);
}
