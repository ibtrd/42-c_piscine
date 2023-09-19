/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 00:57:53 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/19 04:07:46 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_H
# define EX02_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>
# include <libgen.h>

/* FT_TAIL.C */
int		number_of_bytes(int argc, char **argv);
int		is_str_num(char *str);

/* FT_ERRORS.C */
void	put_singlefile_error(char *exe, char *filepath);
void	put_multiplefile_error(char *exe, char *filepath);
void	put_byte_error(char *exe, char *arg);
void	put_no_arg_error(char *exe, char *option);

/* FT_DISPLAY.C */
void	display_one(char **argv, char c);
void	display_all(int argc, char **argv, char c);
int		display_file(char *filepath, int c);
int		display_file2(char *filepath, int c);
int		file_size(char *filepath);

/* UTILS */
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);

#endif