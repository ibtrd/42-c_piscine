/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_row.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:31:42 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/16 21:40:56 by mtrognon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init_line(char *line);

int	line_is_valid(char *line)
{	
	int	a;
	int	b;

	if (line[0] + line[1] + line[2] + line[3] != 202)
		return (0);
	a = 0;
	while (a < 4)
	{
		b = 0;
		while (b < 4 && a != b)
		{
			if (line[a] == line[b])
				return (0);
			b++;
		}
		a++;
	}
	return (1);
}

int	next_line(char *line)
{
	if (line[3] > '4')
		init_line(line);
	while (line[3] < '5')
	{
		line[0] += 1;
		if (line[0] > '4')
		{
			line[0] = '0';
			line[1] += 1;
		}
		if (line[1] > '4')
		{
			line[1] = '0';
			line[2] += 1;
		}
		if (line[2] > '4')
		{
			line[2] = '0';
			line[3] += 1;
		}
		if (line_is_valid(line))
			return (1);
	}
	return (0);
}
