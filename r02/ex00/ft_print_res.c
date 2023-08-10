/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_res.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 10:31:22 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/23 23:17:04 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_res(char *str, t_key *dict, int nb_key)
{
	int	i;

	if (ft_is_it_zero(str, dict, nb_key))
		return ;
	i = 0;
	while (i < 12)
	{
		print_hundred(str, dict, nb_key, i++);
		if (print_ten(str, dict, nb_key, i++) == 2)
			i++;
		print_unit(str, dict, nb_key, i++);
		if (i == 3 && (str[0] != '0' || str[1] != '0' || str[2] != '0'))
			ft_putstr_s(ft_get_struct(dict, 1000000000, nb_key));
		if (i == 6 && (str[3] != '0' || str[4] != '0' || str[5] != '0'))
			ft_putstr_s(ft_get_struct(dict, 1000000, nb_key));
		if (i == 9 && (str[6] != '0' || str[7] != '0' || str[8] != '0'))
			ft_putstr_s(ft_get_struct(dict, 1000, nb_key));
	}
}

int	print_hundred(char *str, t_key *dict, int nb_key, int i)
{
	if (str[i] != '0')
	{
		ft_putstr(ft_get_struct(dict, str[i] - 48, nb_key));
		ft_putchar(32);
		ft_putstr(ft_get_struct(dict, 100, nb_key));
		ft_putchar(32);
		return (1);
	}
	else
		return (0);
}

int	print_ten(char *str, t_key *dict, int nb_key, int i)
{
	int	t;

	if (str[i] == '1')
	{
		t = ((str[i] - 48) * 10 + (str[i + 1]) - 48);
		ft_putstr(ft_get_struct(dict, t, nb_key));
		return (2);
	}
	else if (str[i] >= '2' && str[i] <= '9')
	{
		ft_putstr(ft_get_struct(dict, (str[i] - 48) * 10, nb_key));
		ft_putchar(32);
		return (1);
	}
	else
		return (0);
}

int	print_unit(char *str, t_key *dict, int nb_key, int i)
{
	if (str[i] != '0')
	{
		ft_putstr(ft_get_struct(dict, str[i] - 48, nb_key));
		ft_putchar(32);
		return (1);
	}
	else 
		return (0);
}

int	ft_is_it_zero(char *str, t_key *dict, int nb_key)
{
	int i;

	i = 0;
	while (str[i] == '0')
	{
		if (i == 11)
		{
			ft_putstr(ft_get_struct(dict, 0, nb_key));
			return (1);
		}
		i++;
	}
	return (0);
}
