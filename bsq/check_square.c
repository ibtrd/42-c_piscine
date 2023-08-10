/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:22:41 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/25 18:16:59 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft.h"

int	check_square(char **map, t_map map_infos, t_sq asq)
{
	int	n;

	if (asq.x + asq.size > map_infos.max_x)
		return (0);
	if (asq.y + asq.size > map_infos.max_y)
		return (0);
	n = 0;
	while (n < asq.size)
	{
		if (check_line(map[asq.y + n], map_infos, asq))
			n++;
		else
			return (0);
	}
	return (1);
}

int	check_line(char *line, t_map map_infos, t_sq asq)
{
	int	n;

	n = 0;
	while (n < asq.size)
	{
		if (line[asq.x + n] == map_infos.empt)
			n++;
		else
			return (0);
	}
	return (1);
}

t_sq	brain(char **map, t_map map_infos)
{
	t_sq	asq;
	t_sq	bsq;

	asq.x = 0;
	asq.y = 0;
	asq.size = 0;
	bsq = asq;
	while (asq.y < map_infos.max_y)
	{
		asq.x = 0;
		while (asq.x < map_infos.max_x)
		{
			if (check_square(map, map_infos, asq))
			{
				bsq = asq;
				asq.size++;
			}
			else
				asq.x++;
		}
		asq.y++;
	}
	return (bsq);
}
