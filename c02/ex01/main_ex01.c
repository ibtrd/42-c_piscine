/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:15:37 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/10 09:39:03 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

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
	char	dest[6] = {"12345"};
	char	src[] = {"ABCDEFGHIXYZ"};
	unsigned int	n;

	n = 5;
	ft_putstr(dest);
	ft_putchar('\n');
	ft_putstr(ft_strncpy(dest, src, n));
	ft_putchar('\n');
	ft_putstr(dest);
	return (0);
}
