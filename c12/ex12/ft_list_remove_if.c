/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:02:18 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/14 20:45:55 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), \
		void (*free_fct)(void *))
{
	t_list	*tmp;
	t_list	*prev;

	tmp = *begin_list;
	prev = NULL;
	while (tmp)
	{
		if ((*cmp)(tmp->data, data_ref) == 0)
		{
			(*free_fct)(tmp->data);
			if (!prev)
				*begin_list = tmp->next;
			else
				prev->next = tmp->next;
			free(tmp);
			tmp = prev->next;
		}
		else
		{
			prev = tmp;
			tmp = tmp->next;
		}
	}
}
