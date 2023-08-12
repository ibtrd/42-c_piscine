/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 02:50:01 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/12 04:56:21 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	init_queens(char *str)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		str[i] = '0';
		i++;
	}
}

int	check_queen(char *str, int col)
{
	int	i;
	int	n;

	i = col - 1;
	n = 1;
	while (i >= 0 && i < col)
	{
		if (str[col] == str[i])
			return (0);
		if (str[col] == str[i] + n)
			return (0);
		if (str[col] == str[i] - n)
			return (0);
		i--;
		n++;
	}
	return (1);
}

int	place_queen(char *str, int col, int solution)
{
	while (str[col] <= '9')
	{
		if (check_queen(str, col))
		{
			if (col < 9)
				solution = place_queen(str, col + 1, solution);
			else
			{
				ft_putstr(str);
				write(1, "\n", 1);
				solution++;
			}
		}
		str[col] += 1;
	}
	str[col] = '0';
	return (solution);
}

int	ft_ten_queens_puzzle(void)
{
	char	queens[10];
	int		solution;

	solution = 0;
	init_queens(queens);
	solution = place_queen(queens, 0, solution);
	return (solution);
}
