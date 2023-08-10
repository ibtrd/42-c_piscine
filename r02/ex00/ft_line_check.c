/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emenu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:02:59 by emenu             #+#    #+#             */
/*   Updated: 2023/07/22 19:35:06 by emenu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_char_is_printable(char c)
{
	if (c >= ' ' && c <= 126)
		return (1);
	return (0);
}

int	ft_line_check(char *str)
{
	int	i;

	i = 0;
	if (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] && str[i] >= '0' && str[i] <= '9')
			i++;
	}
	else
		return (0);
	while (str[i] && str[i] == ' ')
		i++;
	if (!(str[i] && str[i] == ':'))
		return (0);
	i++;
	while (ft_char_is_printable(str[i]) == 1 && (str[i] != '\n' || str[i]))
		i++;
	if (str[i] == '\n' || str[i] == '\0')
		return (1);
	return (0);
}
