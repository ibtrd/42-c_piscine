/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 07:24:36 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/15 08:27:41 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*insert;
	t_list	*prev;
	t_list	*curr;

	insert = ft_create_elem(data);
	prev = NULL;
	curr = *begin_list;
	while (curr && (*cmp)(insert->data, curr->data) > 0)
	{
		prev = curr;
		curr = curr->next;
	}
	if (prev)
		prev->next = insert;
	else
		*begin_list = insert;
	insert->next = curr;
}
