/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:45:10 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/11 20:00:26 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		ft_putchar('\n');
		ft_putstr(argv[1]);
		ft_putchar('\n');
		ft_putchar('\n');
		ft_putstr(ft_strcapitalize(argv[1]));
		ft_putchar('\n');
		ft_putchar('\n');
	}
	return (0);
}
