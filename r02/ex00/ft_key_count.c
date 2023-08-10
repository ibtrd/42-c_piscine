/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 21:58:15 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/23 14:57:30 by ibjean-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_key_count(char *str)
{
	int	i;
	int	key_count;

	i = 0;
	key_count = 0;
	while (str[i])
	{
		if (str[i] == '\n' && str[i + 1] != '\n')
			key_count++;
		i++;
	}
	if (key_count < 32)
	{
		ft_dict_error();
		return (-1);
	}
	return (key_count);
}
