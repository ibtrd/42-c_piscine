/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:15:37 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/11 01:20:16 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str);

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
	char	test1[] = {"qaHFJDad4424"};
	char	test2[] = {"sdfsdf!~JJHHsd"};

	ft_putstr(test1);
	ft_putchar('\n');
	ft_strlowcase(test1);
	ft_putstr(test1);
	ft_putchar('\n');

	ft_putstr(test2);
        ft_putchar('\n');
	ft_strlowcase(test2);
	ft_putstr(test2);
        ft_putchar('\n');
	return (0);
}
