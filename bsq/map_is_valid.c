/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_is_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:11:01 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/25 17:12:48 by mjuffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft.h"

int	map_is_valid(char *map, t_map map_infos)
{
	int	i;
	int	n;

	if (!first_line_is_valid(map))
		return (0);
	i = 0;
	while (map && map[i] && map[i] != '\n')
		i++;
	i++;
	n = 0;
	while (n < map_infos.max_y)
	{
		if (!line_is_valid(map, map_infos, i))
			return (0);
		n++;
		i += map_infos.max_x + 1;
	}
	return (1);
}

int	line_is_valid(char *map, t_map map_infos, int i)
{
	int	n;

	n = 0;
	while (n < map_infos.max_x)
	{
		if (!map[i])
			return (0);
		if (!is_char_valid(map[i], map_infos))
			return (0);
		n++;
		i++;
	}
	if (map[i] == '\n')
		return (1);
	return (0);
}

int	first_line_is_valid(char *map)
{
	int	i;

	i = 0;
	while (map[i] != '\n')
	{
		if (map[i] == '\0')
			return (0);
		i++;
	}
	if (map[i + 1] < 32 || map[i + 1] > 126)
		return (0);
	if (!three_chars_are_valid(map, i))
		return (0);
	i -= 4;
	while (i >= 0)
	{
		if (map[i] < '0' || map[i] > '9')
			return (0);
		i--;
	}
	return (1);
}

int	three_chars_are_valid(char *map, int i)
{
	i--;
	if ((map[i] < 32 || map[i] > 126) || map[i] == map[i - 1])
		return (0);
	i--;
	if ((map[i] < 32 || map[i] > 126) || map[i] == map[i + 1])
		return (0);
	i--;
	if (map[i] < 32 || map[i] > 126)
		return (0);
	return (1);
}

int	is_char_valid(char c, t_map map_infos)
{
	if (c == map_infos.empt)
		return (1);
	else if (c == map_infos.obst)
		return (1);
	else
		return (0);
}
