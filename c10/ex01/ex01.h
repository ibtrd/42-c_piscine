/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 00:57:53 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/14 12:39:16 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_H
# define EX01_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>


/* FUNCTIONS */
void	display_file(char *filepath);
void	missing_arg(void);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *str, int fd);

#endif