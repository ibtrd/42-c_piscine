/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:15:37 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/11 16:25:39 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str);

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
	char	test1[] = {"dksjfhrydg"};
	char	test2[] = {"dfg45JjhKS"};

	ft_putstr(test1);
	ft_putchar('\n');
	ft_putstr(ft_strupcase(test1));
	ft_putchar('\n');

	ft_putstr(test2);
        ft_putchar('\n');
	ft_putstr(ft_strupcase(test2));
        ft_putchar('\n');
	return (0);
}
