/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 03:33:25 by mjuffard          #+#    #+#             */
/*   Updated: 2023/07/25 17:11:32 by mjuffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft.h"

int	free_map(char **map, t_map map_infos)
{
	int	y;

	y = 0;
	while (y < map_infos.max_y)
	{
		free(map[y]);
		y++;
	}
	free(map);
	return (0);
}
