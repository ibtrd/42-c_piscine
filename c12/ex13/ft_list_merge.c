/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:49:26 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/14 21:43:22 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*tmp;

	if (*begin_list1)
	{
		tmp = *begin_list1;
		while (tmp && tmp->next)
			tmp = tmp->next;
		tmp->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}
