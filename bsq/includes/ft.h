/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:48:33 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/25 17:09:49 by mjuffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_map
{
	int		max_x;
	int		max_y;
	char	empt;
	char	obst;
	char	full;
}	t_map;

typedef struct s_sq
{
	int	x;
	int	y;
	int	size;
}	t_sq;

char			**create_map(char *raw_map, t_map map_infos);
char			*get_raw_map(char *file_loc);
t_map			get_map_infos(char *raw_map);
t_sq			brain(char **map, t_map map_infos);
char			get_empty_char(char *raw_map);
char			get_obstacle_char(char *raw_map);
char			get_full_char(char *raw_map);
void			fill_square(char **map, t_map map_infos, t_sq bsq);
void			fill_line(char *line, t_map map_infos, t_sq bsq);
void			ft_putstr(char *str);
void			fill_map(char **map, char *raw_map, t_map map_infos);
int				free_map(char **map, t_map map_infos);
int				get_nb_col(char *raw_map);
int				map_is_valid(char *map, t_map map_infos);
int				get_nb_line(char *raw_map);
int				check_line(char *line, t_map map_infos, t_sq asq);
int				line_is_valid(char *map, t_map map_infos, int i);
int				first_line_is_valid(char *map);
int				three_chars_are_valid(char *map, int i);
int				is_char_valid(char c, t_map map_infos);
int				display_solution(char **map, t_map map_infos);
int				solve_map(char **map, t_map map_infos);
int				init_solve(char *arg);

#endif
