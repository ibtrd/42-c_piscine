/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 00:57:20 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/14 01:53:40 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00.h"

int	main(int argc, char **argv)
{
	if (argc_error(argc))
		return (1);
	if (display_file(argv[1]) == -1)
	{
		ft_putstr_fd("Cannot read file.\n", 2);
		return (1);
	}
	return (0);
}

int	argc_error(int argc)
{
	if (argc == 1)
	{
		ft_putstr_fd("File name missing.\n", 2);
		return (1);
	}
	if (argc == 3)
	{
		ft_putstr_fd("Too many arguments.\n", 2);
		return (1);
	}
	return (0);
}

int	display_file(char *str)
{
	int		fd;
	int		rd;
	char	buf;

	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (-1);
	rd = 1;
	while (rd > 0)
	{
		rd = read(fd, &buf, 1);
		if (rd == 1)
			ft_putchar_fd(buf, 1);
	}
	close(fd);
	return (0);
}
