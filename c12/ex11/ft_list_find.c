/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:14:08 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/14 19:56:02 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp)
	{
		if ((*cmp)(tmp->data, data_ref) == 0)
			break ;
		else
			tmp = tmp->next;
	}
	return (tmp);
}
