/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 01:06:56 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/15 06:45:29 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static int		ft_list_size(t_list *head);
static t_list	*ft_list_at(t_list *head, int nbr);

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*head;
	t_list	*tail;
	int		end;
	void	*swap;

	if (!begin_list)
		return ;
	head = begin_list;
	end = ft_list_size(begin_list);
	while (end > (ft_list_size(begin_list) / 2))
	{
		tail = ft_list_at(begin_list, end);
		swap = head->data;
		head->data = tail->data;
		tail->data = swap;
		end--;
		head = head->next;
	}
}

static int	ft_list_size(t_list *head)
{
	int	i;

	i = 0;
	while (head->next)
	{
		head = head->next;
		i++;
	}
	return (i);
}

static t_list	*ft_list_at(t_list *head, int nbr)
{
	int		i;

	i = 0;
	while (head && i < nbr)
	{
		head = head->next;
		i++;
	}
	return (head);
}
