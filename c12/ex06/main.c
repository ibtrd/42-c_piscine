/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 03:15:02 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/14 04:59:29 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void	ft_list_push_front(t_list **begin_list, void *data);
void	free_fct(void *to_free);

int	main(int argc, char **argv)
{
	int		i;
	t_list	*head;
	t_list	*tmp;

	if (argc == 1)
		return (1);
	i = 1;
	head = NULL;
	while (i < argc)
	{
		ft_list_push_front(&head, argv[i]);
		i++;
	}
	tmp = head;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->data);
		tmp = tmp->next;
	}
	ft_list_clear(head, &free_fct);
	return (0);
}

void	free_fct(void *to_free)
{
	printf("Free simulation on %p\n", to_free);
}

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list *));
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
