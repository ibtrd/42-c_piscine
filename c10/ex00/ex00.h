/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 00:57:53 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/14 12:43:52 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_H
# define EX00_H

# include <unistd.h>
# include <fcntl.h>

/* FUNCTIONS */
int		argc_error(int argc);
int		display_file(char *str);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *str, int fd);

#endif