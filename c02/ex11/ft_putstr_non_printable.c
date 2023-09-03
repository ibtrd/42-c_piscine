/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:27:06 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/03 03:57:42 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_printable(char c);
void	print_as_base(char c, char *base);
void	ft_putchar(char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if (is_printable(str[i]))
			ft_putchar(str[i]);
		else
		{
			ft_putchar(92);
			if (str[i] >= 10 && str[i] < 16)
				ft_putchar(48);
			print_as_base(str[i], "0123456789abcdef");
		}
		i++;
	}
}

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	print_as_base(char c, char *base)
{
	int		h;

	if (c >= 16)
		print_as_base(c / 16, "0123456789abcdef");
	h = 0;
	while (h != c % 16)
		h++;
	ft_putchar(base[h]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
