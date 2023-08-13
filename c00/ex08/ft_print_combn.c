/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 02:46:36 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/13 06:00:12 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_if_ascending(char *str, int n)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (str[i] <= str[i - 1])
			return ;
		i++;
	}
	ft_putstr(str);
	if (str[0] == '9' - n + 1 && str[n - 1] == '9')
		return ;
	ft_putstr(", ");
	return ;
}

void	init_str(char *str, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		str[i] = i + 48;
		i++;
	}
	str[i] = 0;
}

void	ft_print_combn(int n)
{
	char	str[10];
	int		i;

	init_str(str, n);
	i = 0;
	while (str[0] <= '9')
	{
		print_if_ascending(str, n);
		while (str[i + 1] && str[i] < '9') 
			i++;
		if (i != n && str[n - 1] != '9')
			str[i] += 1;
		else if (str[i] == '9')
		{
			str[i - 1] += 1;
			str[i] = str[i - 1];
		}
		i = 0;
	}
}
