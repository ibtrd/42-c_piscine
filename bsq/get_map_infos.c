/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_infos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:12:31 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/25 17:11:47 by mjuffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft.h"

int	get_nb_line(char *raw_map)
{
	int	i;
	int	j;
	int	nb;

	j = 0;
	while (raw_map[j] != '\n')
		j++;
	j -= 3;
	i = 0;
	nb = 0;
	while (i < j)
	{
		nb = nb * 10 + raw_map[i] - 48;
		i++;
	}
	return (nb);
}

char	get_empty_char(char *raw_map)
{
	int	i;

	i = 0;
	while (raw_map[i] != '\n')
		i++;
	i -= 3;
	return (raw_map[i]);
}

char	get_obstacle_char(char *raw_map)
{
	int	i;

	i = 0;
	while (raw_map[i] != '\n')
		i++;
	i -= 2;
	return (raw_map[i]);
}

char	get_full_char(char *raw_map)
{
	int	i;

	i = 0;
	while (raw_map[i] != '\n')
		i++;
	i -= 1;
	return (raw_map[i]);
}

int	get_nb_col(char *raw_map)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (raw_map[i] != '\n')
		i++;
	i++;
	while (raw_map[i] != '\n')
	{
		i++;
		n++;
	}
	return (n);
}
