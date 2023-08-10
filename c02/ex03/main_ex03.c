/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:15:37 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/10 12:20:26 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_str_is_numeric(char *);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	test1[] = {"123456789"};
	char	test2[] = {"qqweqwe4"};
	char    test3[] = {};

	ft_putstr(test1);
	ft_putchar('\n');
	ft_putchar(ft_str_is_numeric(test1)+ 48);
	ft_putchar('\n');

	ft_putstr(test2);
        ft_putchar('\n');
        ft_putchar(ft_str_is_numeric(test2)+ 48);
        ft_putchar('\n');

	ft_putstr(test3);
        ft_putchar('\n');
        ft_putchar(ft_str_is_numeric(test3)+ 48);
        ft_putchar('\n');
	return (0);
}
