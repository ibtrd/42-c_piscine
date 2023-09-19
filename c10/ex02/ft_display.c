/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 02:53:36 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/19 04:04:44 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex02.h"

void	display_one(char **argv, char c)
{
	int	i;

	i = 1;
	if (!strcmp(argv[1], "-c"))
		i = 3;
	if (display_file(argv[i], c) != 0)
		put_singlefile_error(argv[0], argv[i]);
}

void	display_all(int argc, char **argv, char c)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!strcmp(argv[i], "-c"))
			i += 2;
		else
		{
			if (display_file2(argv[i++], c) != 0)
				put_multiplefile_error(argv[0], argv[i - 1]);
			if (i != argc)
				ft_putchar_fd('\n', 1);
		}
	}
}

int	display_file(char *filepath, int c)
{
	int		fd;
	char	buf;
	int		i;
	int		size;

	fd = open(filepath, O_RDONLY);
	if (fd < 3)
		return (-1);
	i = 0;
	size = file_size(filepath);
	while (read(fd, &buf, 1) == 1 && i < size - c - 1)
		c++;
	while (read(fd, &buf, 1) != 0)
		ft_putchar_fd(buf, 1);
	close(fd);
	return (0);
}

int	display_file2(char *filepath, int c)
{
	int		fd;
	char	buf;
	int		i;
	int		size;

	fd = open(filepath, O_RDONLY);
	if (fd < 3)
		return (-1);
	ft_putstr_fd("==> ", 1);
	ft_putstr_fd(filepath, 1);
	ft_putstr_fd(" <==\n", 1);
	i = 0;
	size = file_size(filepath);
	while (read(fd, &buf, 1) == 1 && i < size - c - 1)
		c++;
	while (read(fd, &buf, 1) != 0)
		ft_putchar_fd(buf, 1);
	close(fd);
	return (0);
}

int	file_size(char *filepath)
{
	int		fd;
	char	buf;
	size_t	size;

	fd = open(filepath, O_RDONLY);
	if (fd < 3)
		return (-1);
	size = 0;
	while (read(fd, &buf, 1) != 0)
		size++;
	close(fd);
	return (size);
}
