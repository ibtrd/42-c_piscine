/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:15:37 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/10 21:58:20 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_str_is_uppercase(char *);

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
	char	test1[] = {"sdfsfsf"};
	char	test2[] = {"SKJFSHHH"};
	char    test3[] = {};

	ft_putstr(test1);
	ft_putchar('\n');
	ft_putchar(ft_str_is_uppercase(test1)+ 48);
	ft_putchar('\n');

	ft_putstr(test2);
        ft_putchar('\n');
        ft_putchar(ft_str_is_uppercase(test2)+ 48);
        ft_putchar('\n');

	ft_putstr(test3);
        ft_putchar('\n');
        ft_putchar(ft_str_is_uppercase(test3)+ 48);
        ft_putchar('\n');
	return (0);
}
