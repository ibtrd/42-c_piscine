/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:07:13 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/25 17:11:19 by mjuffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft.h"

void	fill_square(char **map, t_map map_infos, t_sq bsq)
{
	int	i;

	i = 0;
	while (i < bsq.size)
	{
		fill_line(map[bsq.y + i], map_infos, bsq);
		i++;
	}
}

void	fill_line(char *line, t_map map_infos, t_sq bsq)
{
	int	i;

	i = 0;
	while (i < bsq.size)
	{
		line[bsq.x + i] = map_infos.full;
		i++;
	}
}
