/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:30:19 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/25 17:12:21 by mjuffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft.h"

t_map	get_map_infos(char *raw_map)
{
	t_map	map_infos;

	map_infos.max_x = get_nb_col(raw_map);
	map_infos.max_y = get_nb_line(raw_map);
	map_infos.empt = get_empty_char(raw_map);
	map_infos.obst = get_obstacle_char(raw_map);
	map_infos.full = get_full_char(raw_map);
	return (map_infos);
}
