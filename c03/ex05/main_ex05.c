/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:15:37 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/17 13:02:40 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

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
	unsigned int	size;
	char	dest[50] = {"Bonj"};
	char	src[4] = {"our"};

	size = 3;

	write(1, "My function:\n", 13);
	ft_putstr(dest);
	ft_putchar('\n');
	ft_putstr(src);
	ft_putchar('\n');
	ft_putchar(ft_strlcat(dest, src, size) + 48);
	ft_putchar(0);
	ft_putstr(dest);
	ft_putchar('\n');

/*	char    dest2[3] = {"He"};
        const char    src2[4] = {"llo"};

	write(1, "String.h:\n", 13);
	ft_putchar(strlcat(dest2, src2, size));
	ft_putchar(0);
	ft_putstr(dest2);
*/	//ft_putchar('\n');

	return (0);
}
