/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 20:17:17 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/27 09:46:33 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < ft_strlen(str))
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				n;
	t_stock_str		*tab;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	n = 0;
	while (n < ac)
	{
		tab[n].size = ft_strlen(av[n]);
		tab[n].str = av[n];
		tab[n].copy = ft_strdup(av[n]);
		if (!tab[n].copy)
			return (NULL);
		n++;
	}
	tab[n].str = 0;
	return (tab);
}
