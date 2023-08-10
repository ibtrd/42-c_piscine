/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:15:37 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/11 20:54:59 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_str_is_alpha(char *str);

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
	char	test1[] = {"asdadads"};
	char	test2[] = {"456asd462"};
	char    test3[] = {};

	ft_putstr(test1);
	ft_putchar('\n');
	ft_putchar(ft_str_is_alpha(test1)+ 48);
	ft_putchar('\n');

	ft_putstr(test2);
        ft_putchar('\n');
        ft_putchar(ft_str_is_alpha(test2)+ 48);
        ft_putchar('\n');

	ft_putstr(test3);
        ft_putchar('\n');
        ft_putchar(ft_str_is_alpha(test3)+ 48);
        ft_putchar('\n');
	return (0);
}
