/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex13.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:48:28 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/14 21:43:23 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);
void	ft_print_list(t_list *head);
t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);

int	main(int argc, char **argv)
{
	int		i;
	t_list	*head1;
	t_list	*head2;

	if (argc == 1)
		return (1);
	i = 1;
	head1 = NULL;
	head2 = NULL;
	while (i < argc)
	{
		ft_list_push_front(&head1, argv[i]);
		ft_list_push_front(&head2, argv[i + 1]);
		i += 2;
	}
	ft_print_list(head1);
	ft_print_list(head2);
	printf("ft_list_merge\n");
	ft_list_merge(&head1, head2);
	ft_print_list(head1);
	return (0);
}

void	ft_print_list(t_list *head)
{
	int		i;
	t_list	*tmp;

	tmp = head;
	i = 0;
	if (!tmp)
		printf("list is NULL");
	while (tmp)
	{
		if (i != 0)
			printf(" - ");
		printf("%s", (char *)tmp->data);
		tmp = tmp->next;
		i++;
	}
	printf("\n");
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
