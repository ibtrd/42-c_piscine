/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibjean-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:44:15 by ibjean-b          #+#    #+#             */
/*   Updated: 2023/07/23 22:37:39 by ibjean-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_key	*ft_init_tab(int size, char *dict)
{
	int				i;
	t_key			*tab;

	i = 0;
	tab = malloc(sizeof (t_key) * size);
	if (!tab)
		return (0);
	while (i < size)
	{
		tab[i].key = ft_get_key_num(dict, i);
		tab[i].value = ft_get_key_str(dict, i);
		i++;
	}
	return (tab);
}

char	*ft_get_struct(t_key *tab, unsigned int nb, int nb_key)
{
	int	i;

	i = 0;
	while (i <= nb_key)
	{
		if (tab[i].key == nb)
			return (tab[i].value);
		i++;
	}
	ft_dict_error();
	return (NULL);
}
