/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 01:25:32 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/14 02:04:36 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*head;
	t_list	*tmp;

	i = 0;
	head = ft_create_elem(strs[i++]);
	while (i < size)
	{
		tmp = head;
		head = ft_create_elem(strs[i]);
		head->next = tmp;
		i++;
	}
	return (head);
}
