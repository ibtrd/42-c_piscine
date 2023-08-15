/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:02:18 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/16 00:29:24 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), \
		void (*free_fct)(void *))
{
	t_list	*curr;
	t_list	*prev;
	t_list	*next;

	curr = *begin_list;
	prev = NULL;
	while (curr)
	{
		next = curr->next;
		if ((*cmp)(curr->data, data_ref) == 0)
		{
			(*free_fct)(curr->data);
			if (!prev)
				*begin_list = curr->next;
			else
				prev->next = curr->next;
			free(curr);
			curr = next;
		}
		else
		{
			prev = curr;
			curr = next;
		}
	}
}
