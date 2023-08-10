/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:15:37 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/21 11:32:49 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);

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
	char	str[100] = {"Hello Anais est-ce que tu veux un cookie ?"};
	char	to_find[100] = {""};

	ft_putstr(str);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putstr(ft_strstr(str, to_find));
	ft_putchar('\n');
	return (0);
}
