/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:51:09 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/14 00:03:00 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_list_last(t_list *begin_list);

t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);

int	main(int argc, char **argv)
{
	int		i;
	t_list	*head;
	t_list	*tmp;

	if (argc == 1)
		return (1);
	head = NULL;
	i = 0;
	while (i < argc)
	{
		ft_list_push_front(&head, argv[i]);
		i++;
	}
	tmp = head;
	tmp = ft_list_last(tmp);
	printf("ft_list_last data: %s\n", (char *)tmp->data);
	return (0);
}

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(*elem));
	if (!elem)
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

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
