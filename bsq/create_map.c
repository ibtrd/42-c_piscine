/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:47:40 by mjuffard          #+#    #+#             */
/*   Updated: 2023/07/25 17:10:54 by mjuffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft.h"

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

char	*cut_first_line(char *raw_map)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (raw_map[i] != '\n')
		i++;
	i++;
	while (raw_map[i])
	{
		raw_map[j] = raw_map[i];
		i++;
		j++;
	}
	while (j < i)
	{
		raw_map[j] = 0;
		j++;
	}
	return (raw_map);
}

char	**create_map(char *raw_map, t_map map_infos)
{
	char	**map;
	int		y;

	y = 0;
	if (!map_is_valid(raw_map, map_infos))
		return (NULL);
	raw_map = cut_first_line(raw_map);
	map = malloc(sizeof(char *) * (map_infos.max_y + 1));
	if (!map)
		return (0);
	map[map_infos.max_y] = NULL;
	while (y < map_infos.max_y)
	{
		map[y] = malloc(sizeof(char) * (map_infos.max_x + 2));
		if (!map[y])
			return (0);
		map[y][map_infos.max_x + 1] = '\0';
		y++;
	}
	map[y] = NULL;
	return (map);
}

void	fill_map(char **map, char *raw_map, t_map map_infos)
{
	int	x;
	int	y;

	y = 0;
	while (y < map_infos.max_y)
	{
		x = 0;
		while (x <= map_infos.max_x)
		{
			map[y][x] = *raw_map;
			x++;
			raw_map++;
		}
		y++;
	}
}
