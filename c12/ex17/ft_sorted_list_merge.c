/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:06:52 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/15 20:00:47 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, \
		int (*cmp)())
{
	t_list	*next_insert;
	t_list	*prev;
	t_list	*curr;

	prev = NULL;
	curr = *begin_list1;
	while (begin_list2)
	{
		if (!curr || (*cmp)(curr->data, begin_list2->data) >= 0)
		{
			next_insert = begin_list2->next;
			begin_list2->next = curr;
			if (prev)
				prev->next = begin_list2;
			else
				*begin_list1 = begin_list2;
			prev = begin_list2;
			begin_list2 = next_insert;
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
}
