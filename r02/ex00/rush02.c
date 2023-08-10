/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibjean-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:33:58 by ibjean-b          #+#    #+#             */
/*   Updated: 2023/07/23 22:30:14 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	rush02_init(char *input)
{
	char	*raw_dict;
	int		nb_key;
	t_key	*tab;

	raw_dict = ft_get_dict();
	if (raw_dict == NULL)
	{
		free(raw_dict);
		ft_error();
		return (-1);//a traiter dans le main!
	}
	nb_key = ft_key_count(raw_dict);
	if (nb_key == -1)
	{
		free(raw_dict);
		return (-1);
	}
	tab = ft_init_tab(nb_key, raw_dict);
	rush02_display(tab, input, nb_key);
	return (1);
}

void	rush02_display(t_key *tab, char *input, int nb_key)
{
	input = "548756321454";
	ft_print_res(input, tab, nb_key);
	
}
