/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 03:55:20 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/14 12:43:20 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.h"

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		missing_arg();
	else
	{
		i = 1;
		while (argc-- > 1)
			display_file(argv[i++]);
	}
	return (0);
}

void	display_file(char *filepath)
{
	int		fd;
	char	buf;

	fd = open(filepath, O_RDONLY);
	if (fd <= 2)
	{
		ft_putstr_fd("cat: ", 2);
		ft_putstr_fd(filepath, 2);
		ft_putstr_fd(": ", 2);
		ft_putstr_fd(strerror(errno), 2);
		ft_putchar_fd('\n', 2);
		return ;
	}
	while (read(fd, &buf, 1) != 0)
		ft_putchar_fd(buf, 1);
	close(fd);
}

void	missing_arg(void)
{
	char	buf;

	while (read(0, &buf, 1) != 0)
		ft_putchar_fd(buf, 1);
}
