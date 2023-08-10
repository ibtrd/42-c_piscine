/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_raw_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:26:03 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/25 17:12:04 by mjuffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft.h"

unsigned int	get_file_size(char *file_loc)
{
	int				fd;
	int				rd;
	unsigned int	size;
	char			buf[1];

	fd = open(file_loc, O_RDONLY);
	if (fd == -1 || fd < 3)
		return (0);
	rd = 1;
	size = 0;
	while (rd != 0)
	{
		rd = read(fd, buf, 1);
		size++;
	}
	if (close(fd) == -1)
		return (0);
	return (size - 1);
}

char	*get_raw_map(char *file_loc)
{
	int				fd;
	char			*raw_map;
	unsigned int	size;

	size = get_file_size(file_loc);
	if (size < 8)
		return (NULL);
	raw_map = malloc(sizeof(char) * (size + 1));
	if (!raw_map)
		return (NULL);
	fd = open(file_loc, O_RDONLY);
	if (fd == -1 || fd < 3)
		return (NULL);
	if (!read(fd, raw_map, size))
		return (NULL);
	if (close(fd) == -1)
		return (NULL);
	raw_map[size] = '\0';
	return (raw_map);
}
