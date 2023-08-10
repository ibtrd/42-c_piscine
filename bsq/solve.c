/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 09:34:28 by mjuffard          #+#    #+#             */
/*   Updated: 2023/07/25 17:13:03 by mjuffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft.h"

int	init_solve(char *arg)
{
	char	*raw_map;
	char	**map;
	t_map	map_infos;

	raw_map = get_raw_map(arg);
	if (!raw_map)
		return (1);
	map_infos = get_map_infos(raw_map);
	if (map_infos.max_x == -1)
		return (1);
	map = create_map(raw_map, map_infos);
	if (!map)
		return (1);
	fill_map(map, raw_map, map_infos);
	free(raw_map);
	if (solve_map(map, map_infos))
		return (1);
	return (0);
}

int	solve_map(char **map, t_map map_infos)
{
	t_sq	bsq;

	bsq = brain(map, map_infos);
	if (bsq.size == 0)
	{
		free_map(map, map_infos);
		return (1);
	}
	fill_square(map, map_infos, bsq);
	display_solution(map, map_infos);
	return (0);
}

int	display_solution(char **map, t_map map_infos)
{
	int	n;

	n = 0;
	while (n < map_infos.max_y)
	{
		ft_putstr(map[n]);
		n++;
	}
	free_map(map, map_infos);
	return (0);
}
