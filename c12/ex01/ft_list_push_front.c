/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:51:07 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/13 22:57:23 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	if (*begin_list)
	{
		new = ft_create_elem(data);
		new->next = *begin_list;
		*begin_list = new;
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}
